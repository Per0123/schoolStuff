# Razlika između rekurzije i iteracije
U strukturama podataka i algoritmima, iteracija i rekurzija su dva temeljna pristupa rješavanju problema. Oba izvršavaju instrukcije više puta dok se zadatak ne dovrši. Međutim, postoje značajne razlike između rekurzije i iteracije u smislu misaonih procesa, pristupa implementaciji, tehnika analize, složenosti koda i performansi.
- Iteracija i rekurzija su dva glavna pristupa rjesavanju problema, oba izvrsavaju operacije vise puta dok se zadatak ne izvrsi, ali izmedu njih postoje velike razlike.

## Razlika u smislu misaonog procesa
Ponekad se problem kodiranja može riješiti i iteracijom i rekurzijom, ali izbor pristupa ovisi o prirodi problema i o tome koji je intuitivniji za korištenje.

Na primjer, rekurzija je prirodnija za algoritme poput binarnog pretraživanja, sortiranja spajanjem, brzog sortiranja, DFS prolaska kroz graf itd. Slično tome, pristupe poput povratnog praćenja i strukture podataka poput stabala lakše je razumjeti pomoću rekurzije.
- Rekurzija se koristi kod algoritama kao sto su binary search, merge sort, quick sort i DFS. 
S druge strane, mnoge probleme kodiranja lako je riješiti pomoću iteracije. Rekurzivno rješenje može biti izazovno ili nemoguće za razumjeti u tim slučajevima. Na primjer: sortiranje umetanjem, sortiranje hrpom i BFS prolazak kroz graf ili stablo učinkovito se implementiraju pomoću iteracije.
- Iteracija se koristi kod algoritama kao sto su intertion sor, heap sort i BFS. 
Popularni rekurzivni i iterativni pristupi rješavanju problema u DSA

## Razlika u pristupu implementacije
Iteracija se implementira pomoću petlje koja se sastoji od inicijalizacije, povećanja varijabli petlje, koda unutar tijela petlje i uvjeta završetka. Nasuprot tome, rekurzija se implementira pomoću poziva funkcija i definirana je u smislu broja podproblema, ulazne veličine podproblema, osnovnih slučajeva i dodatnih operacija potrebnih za kombiniranje rješenja podproblema.
- Iteracija se napravi pomocu petlje koja se sastoji od inicijalizacije, povecanje varijabli petlji, koda unutar petlje i uvjeta zavrsetka, a rekurzija se napravi pomocu poziva funkcij i definirana je u smislu broja podproblema, ulazne velicine podproblema, osnovnih slucajeva i dodatnih operacija. 

U rekurzivnoj implementaciji, kompajler koristi stog poziva za pohranjivanje informacija o svakom pozivu funkcije, kao što su ulazne vrijednosti i gdje bi se izvršavanje trebalo nastaviti. To omogućuje programu praćenje trenutnog stanja dok rješava manje podprobleme.
- Kod rekurzije, kompajler koristi stog za pohranjivanje informacije funkcije. 
Moguće je transformirati svaku rekurzivnu implementaciju u iterativnu implementaciju pomoću stoga (što kompajler radi u pozadini).
U većini slučajeva, iterativna implementacija pomoću stoga postaje složenija zbog nekoliko ulaznih parametara, dodatnih operacija i složene prirode rekurzivnih poziva. Dakle, promjena rekurzivnog algoritma u iterativni algoritam može učiniti kod kompliciranijim ili manje održivim.
Postoje neke situacije u kojima je rekurzija jednostavna i može se lako pretvoriti u iterativni kod pomoću steka. Jedna ideja koja dobro funkcionira jest oponašanje onoga što radi kompajler. Izvrstan primjer za to je iterativni DFS prolazak pomoću stoga.
Postoje neka rekurzivna rješenja koja se mogu iterativno implementirati bez korištenja stoga. Klasični primjeri za to su pronalaženje n-tog Fibonaccijevog broja, pronalaženje faktorijela, binarno pretraživanje itd.

## Razlika u smislu izvršavanja koda
Iterativni kod više puta izvršava naredbe u petlji dok se problem ne riješi. Nasuprot tome, rekurzivni kod rješava problem koristeći manje podprobleme dok ne dođe do osnovnog slučaja.

Rekurzija može biti sporija od iteracije jer svaki poziv funkcije dodaje opterećenje i koristi prostor na stogu poziva. Ali može olakšati izražavanje problema kada se prirodno razbiju na manje podprobleme.
Iteracija često radi brže jer izbjegava ponovljeno opterećenje poziva funkcija. Ali za neke probleme, iterativno rješenje može biti teže napisati i razumjeti.

## Razlika u smislu pogreške koda
U iteraciji se beskonačna petlja može pojaviti zbog pogreške u dodjeljivanju ili povećanju varijable petlje ili pogrešnog uvjeta završetka. To može potrošiti sistemske resurse poput procesorskog vremena ili memorije i zaustaviti izvršavanje programa.
U rekurziji se može dogoditi beskonačna rekurzija zbog nedostatka osnovnih slučajeva ili netočnih osnovnih slučajeva. To može uzrokovati scenarij prelijevanja stoga.
I iteracija i rekurzija mogu biti sklone malim, ali kritičnim pogreškama, poput pogreške "off-by-one" u iteraciji ili prosljeđivanja pogrešne vrijednosti parametru funkcije u rekurziji. Važno je testirati uvjete i varijable uključene u ove pristupe kako bi se izbjegle takve pogreške.

## Razlika u smislu analize koda
Općenito, analiza iterativnog koda je relativno jednostavna. Brojimo broj iteracija petlje i množimo ga s vremenskom složenošću koda koji se izvršava u svakoj iteraciji. Ali postoje iznimke gdje brojanje iteracija može biti nezgodno ili gdje operacije petlje traju kraće od očekivanog.
Primarna metoda za analizu rekurzivnog koda je metoda rekurzijskog stabla. Crtamo rekurzijsko stablo, dodjeljujemo trošak svakom čvoru i zbrajamo troškove na svakoj razini. To može biti teško za složene rekurzivne relacije. Ali algoritmi "divide-and-conquer" mogu se lako analizirati pomoću Glavnog teorema.
