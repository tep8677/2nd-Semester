million=1000000;
balance=float(input("Πόσα χρήματα θα τοκίσεις:"));
epitokio=float(input("Πόσο είναι το επιτόκιο (για 1.5% εισήγαγε: 1.5):"));
years=0;

while(balance<million):
    balance+=balance*(epitokio*0.01);
    years+=1;
print("Θα γίνεις εκατομμυριούχος μετά από {} χρόνια".format(years));
