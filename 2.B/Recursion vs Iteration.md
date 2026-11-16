# Razlika između rekurzije i iteracije
- Iteracija i rekurzija su dva glavna pristupa rjesavanju problema, oba izvrsavaju operacije vise puta dok se zadatak ne izvrsi, ali izmedu njih postoje velike razlike.
- Rekurzija se koristi kod algoritama kao sto su binary search, merge sort, quick sort i DFS. 
- Iteracija se koristi kod algoritama kao sto su intertion sor, heap sort i BFS. 
- Iteracija se napravi pomocu petlje koja se sastoji od inicijalizacije, povecanje varijabli petlji, koda unutar petlje i uvjeta zavrsetka, a rekurzija se napravi pomocu poziva funkcij i definirana je u smislu broja podproblema, ulazne velicine podproblema, osnovnih slucajeva i dodatnih operacija. 
- Kod rekurzije, kompajler koristi stog za pohranjivanje informacije funkcije. 
- Moguce je pretvoriti svaku rekurzivnu implementaciju u iterativnu implementaciju pomoco stoga, ali zbog toga postaje slozenija zbog nekoliko ulaaznih parametara. 
- Iterativni kod vise puta izvrsi naredbe u petlji dok se problem ne rijesi, a rekurzivni rjesava problem koristeci podprobleme. 
- U iteraciji se beskonacna petlja moze pojaviti zbog greske u uvijetu, dodjeljivanju ili povecavanju varijable, a u rekurziji moze doci do nje zbog nedostatka uvijeta ili netocnih osnovnih slucajeva.
