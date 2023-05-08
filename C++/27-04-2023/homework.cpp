#include <iostream>
#include <vector>

using namespace std;


float revenueCalculate(float);

float billsCalculate(float);

void warnForError(float);

vector<int> getHighestConsumptionCustomers(vector<float>,vector<string>,int);
/*
*/


int main(){
    vector<string> customerCode;
    vector<float> consumption;

    vector<float> bills;
    vector<float> revenue;

    float totalRevenue=0;

    //Getting user input here
    while (true){
        string tempCode;
        float tempConsumption;

        cout << endl << "Enter customer code:";
        //Must check in case we input a code that already exists..
        cin >> tempCode;
        customerCode.push_back(tempCode);

        do {
            cout << endl << "Enter last quarter's consumption in m^3:";
            cin >> tempConsumption;
        }while(tempConsumption<=0);

        //Checking if values are normal
        if((tempConsumption<20)||(tempConsumption>80)){
            warnForError(tempConsumption);
        }


        //Creating vectors for all variables to calculate
        consumption.push_back(tempConsumption);
        revenue.push_back(revenueCalculate(tempConsumption));
        totalRevenue=totalRevenue+revenueCalculate(tempConsumption);
        bills.push_back(billsCalculate(revenueCalculate(tempConsumption)));



        string resume;
        do{
            cout << endl << "Continue (y or n):";
            cin >> resume;
        }while((resume!="y")&&(resume!="n"));

        if(resume=="y"){continue;}
        else {break;}
    };

    /* useful for debugging
    cout << "====================" << endl;
    cout << "   customer codes   " << endl;
    cout << "====================" << endl;

    for(int i=0;i<customerCode.size();i++){
        cout << i << ": "<< customerCode[i] << endl;
    }

    cout << "====================" << endl;
    cout << "customer consumption" << endl;
    cout << "====================" << endl;

    for(int i=0;i<customerCode.size();i++){
        cout << i << ": "<< consumption[i] << endl;
        cout << revenue[i] << endl;
        cout << bills[i] << endl;
    }

    cout << "====================" << endl;
    cout << endl;

    */



    //Finding the customers with the highest consumption
    int howManyToFind;
    cout << "How many top customers to display?" << endl;
    do{
        cout << "Make sure to pick a valid number (1-Customer list length) :";
        cin >> howManyToFind;
    }while ((howManyToFind<1)||(howManyToFind>consumption.size()));

    vector<int> topCustomerIndex=getHighestConsumptionCustomers(consumption,customerCode,howManyToFind);

    cout << "customer rankings" << endl;

    for(int i=0;i<howManyToFind;i++){
        cout << i+1 << ". Customer Code:" << "'#" << customerCode[topCustomerIndex[i]] << "'" << " Consumption->" << consumption[topCustomerIndex[i]] << "m^3" << endl;
    };



    for(int i=0;i<bills.size();i++){
        cout << "Bills of costumer with code #" << customerCode[i] << " are: $"<< bills[i] << endl;
    };
    cout << "EYDAP that quarter made a revenue of $" << totalRevenue << endl;

    return 0;
}

float revenueCalculate(float consumption){

        float fixedRate=3; //pagio
        float drainage=consumption*0.75;


        //revenue==fixedRate+consumption*consumptionTier+drainage
        if(consumption>0||consumption<16){
            return fixedRate+consumption*0.35+drainage;
        }
        else if(consumption>=16||consumption<61){
            return fixedRate+consumption*0.64+drainage;
        }
        else if(consumption>=61||consumption<86){
            return fixedRate+consumption*1.83+drainage;
        }
        else if(consumption>=86||consumption<111){
            return fixedRate+consumption*2.56+drainage;
        }
        else{ //consumption will be >0
            return fixedRate+consumption*3.2+drainage;
        }
};

float billsCalculate(float revenue){
    float VAT=0.2;
    return revenue+revenue*VAT; //0.2 == 20% VAT.
};

vector<int> getHighestConsumptionCustomers(
    vector<float> const consumption,
    vector<string> const customerCode,
    int howManyToFind
    ){
    vector<string> highestConsumptionCustomers;
    vector<float> consumptionTemp=consumption;
    vector<int> highestIndex;

    //


    for(int i=0;i<howManyToFind;i++){
            float tempIndex;
            float tempNum=0;
            for(int j=0;j<consumptionTemp.size();j++){
            if (consumptionTemp[j]>=tempNum){
                tempNum=consumptionTemp[j];
                tempIndex=j;
            };
            }
            highestIndex.push_back(tempIndex);
            consumptionTemp[tempIndex]=0;
//            highestConsumptionCustomers.push_back(customerCode[tempIndex]);
    };

    return highestIndex;

    /*
    cout << "customer rankings" << endl;

    for(int i=0;i<howManyToFind;i++){
            cout << i+1 << ". Customer Code:" << "'#" <<highestConsumptionCustomers[i] << "'" << " Consumption->" << consumption[highestIndex[i]] << "m^3" << endl;
    };
    */
}

void warnForError(float quarterValue){
    cout << "Possible error." << endl;

    if(quarterValue>80){
    float prevConsumption;
    do {
        cout << "Please enter the consumption of the quarter before this one:";
        cin >> prevConsumption;
    }while(prevConsumption<=0);

    if(prevConsumption<20){
        cout << "Please check your water meter!" << endl;
    }
    else if(prevConsumption<40){
        cout << "Possible error." << endl;
    }
    };
};