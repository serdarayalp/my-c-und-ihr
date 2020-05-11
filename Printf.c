#include <stdio.h>

int main()
{

    /*

Das allgemeine Schema
---------------------
%[Flags][Breite][.Präzision][Typergänzung: h|l|L]Datentyp


Einige weitere Angaben zum Ausgabeformat (Flags)
+++++++++++++++++++++++++++++++++++++++++++++++++++++++
Flags	            angewendet auf Typ	    Bedeutung
------------------------------------------------------
<Keins>	 	        -                       rechtsbündig
-	 	            -                       linksbündig mit folgenden Leerzeichen
+	 	            -                       Vorzeichen immer ausgeben (auch +)
Leerzeichen	 	    -                       nur negative Vorzeichen
#	                o	                    für Werte != 0 wird eine '0' vorgestellt
#                   x, X	                für Werte != 0 wird '0x', bzw. '0X' vorgestellt
#                   e, E, f, g, G	        Dezimalpunkt immer ausgeben


Angabe für die Breite der Ausgabe.
++++++++++++++++++++++++++++++++++++++++
Breite	    Wirkung
--------------------------------
n	        min. n Zeichen (über n wird die Zahl nicht geschnitten), Leerzeichen vorangestellt
0n	        min. n Zeichen (über n wird die Zahl nicht geschnitten), Nullen vorangestellt
*	        das nächste Argument aus der Liste ist die Breite


Angaben zur Anzahl der Nachkommastellen (Präzision).
+++++++++++++++++++++++++++++++++++++++++++++++++++++++
Präzision	    angewendet auf Typ	    Präzision
-----------------------------------------------------
.n	            e, E, f	                n Nachkommastellen
.n              g, G	                max. n Nachkommastellen
.0	            e, E, f	                kein Dezimalpunkt
<nix>	        e, E, f	                6 Nachkommastellen
.*	 	        -                       Präzision aus nächstem Argument der Liste

Modifizierer (Typergänzung) : 
Bisher konnten wir mit dem Typ nur einige der elementaren 
Datentypen ansprechen.Durch den Modifizierer k onnen auch die anderen Datentypen ausgegeben werden.
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
h       Die Argumente werden als short interpretiert (Formate: d,i,o,u,x,X). 
l       Die  Argumente  werden  als  long  (Formate:  d,i,o,u,x,X)  bzw.  als double 
        interpretiert (Formate; e,E,f,g,G). 
L       Die Argumente werden als long double interpretiert (Formate e,E,f,g und G).



Platzhalter der elementaren Datentypen
++++++++++++++++++++++++++++++++++++++++
Platzhalter	Datentyp	    Darstellung
--------------------------------------------------
%d oder %i	signed int	    dezimal
%u	        unsigned int	dezimal
%o	        unsigned int	oktal
%x	        unsigned int	Hexadezimal (mit kleinen Buchstaben)
%X	        unsigned int	Hexadezimal (mit großen Buchstaben)
%f	        double	        immer ohne Exponent
%e	        double	        immer mit Exponent (durch 'e' angedeutet)
%E	        double	        immer mit Exponent (durch 'E' angedeutet)
%g	        double	        verwendet die kürzeste Version von %e oder %f
%G	        double	        verwendet die kürzeste Version von %E oder %f
%c	        char	        einzelnes Zeichen
%s	        char[]	        Zeichenkette (String)
%p	        void *	        Speicheradresse
%n	        signed int *	schreibt die Anzahl der bisher ausgegebenen Zeichen in die Variable, 
                            die als Parameter angegeben ist (Adresse der Variable, z.B. &variableName oder als Pointer)
%%	        -	            Ausgabe des Zeichens '%'



*/

    printf("%d\n", printf("Das ist ein Test\n"));

    printf("%i\n", 120);

    printf("1000000 in HEX (Klein) ist: %x\n", 1000000);
    printf("1000000 in HEX (Gross) ist: %X\n", 1000000);

    printf("%%\n");

    printf("\n");
    printf("***************************************************************");
    printf("\n");

    float floatVariable1, floatVariable2;
    double doubleVariable;
    long double longDoubleVariable;

    floatVariable1 = floatVariable2 = 1234.345678;
    doubleVariable = 52437.034637;
    longDoubleVariable = 958675.279838;

    printf("%e\n %E\n %le\n %Le", floatVariable1, floatVariable2, doubleVariable, longDoubleVariable);

    printf("\n");
    printf("***************************************************************");
    printf("\n");

    printf("%g\n %G\n %lg\n %LG", floatVariable1, floatVariable2, doubleVariable, longDoubleVariable);

    printf("\n");
    printf("***************************************************************");
    printf("\n");

    int val1, val2, val3, val4, val5, val6, val7;

    printf("%ns%ne%nr%nd%na%nr%n\n", &val1, &val2, &val3, &val4, &val5, &val6, &val7);
    printf("%d %d %d %d %d %d %d\n", val1, val2, val3, val4, val5, val6, val7);

    printf("\n");
    printf("***************************************************************");
    printf("\n");

    // %[Flags][Breite][.Präzision][h|l|L]Typ
    printf("Geschwindigkeit: %f\n", 87.3);  // Geschwindigkeit: 87.300000
    printf("Das kostet %.2f Euro\n", 15.9); // Das kostet 15.90 Euro

    printf("%d\n", 123456789); // 123456789
    printf("%4d\n", 12);       //    12
    printf("%04d\n", 12);      // 0012

    printf("%e\n", 124.8);   // 1.248000e+002
    printf("%.2e\n", 124.8); // 1.25e+002
    printf("%.2e\n", 124.4); // 1.24e+002

    printf("%#.0f\n", 12.3); // 12.

    printf("12345678\n");
    // .*	=   Präzision aus nächstem Argument der Liste nehmen
    printf("%8.*f\n", 2, 12.3456); // 12.35

    printf("%10d\n", 12);   // xxxxxxxx12
    printf("%010d\n", 12);  // 0000000012
    printf("%-10d\n", 12);  // 12xxxxxxxx
    printf("%+10d\n", 12);  // xxxxxxx+12
    printf("%-+10d\n", 12); // +12xxxxxxx
    printf("% 10d\n", -12); // xxxxxxx-12
    printf("% 10d\n", 12);  // xxxxxxxx12

    printf("%d\n", 5158);
    printf("%o\n", 5158);
    printf("%#o\n", 5158);

    printf("\n");
    printf("***************************************************************");
    printf("\n");

    printf("%d\n", 12863);
    printf("%x\n", 12863);
    printf("%X\n", 12863);

    printf("\n");
    printf("***************************************************************");
    printf("\n");

    printf("%.7d\n", 4735);
    printf("%.7i\n", 4735);
    printf("%.7o\n", 4735);
    printf("%.7u\n", 4735);
    printf("%.7x\n", 4735);

    printf("\n");
    printf("***************************************************************");
    printf("\n");

    printf("%.2f\n", 473.534965); // 473.53
    printf("%.4f\n", 473.534965); // 473.5350
    printf("%.7e\n", 473.534965); // 4.7353496e+002
    printf("%.8g\n", 473.534965); // 473.53496

    printf("%.30s\n", "Das ist ein Test");
    printf("%.10s\n", "Das ist ein Test");

    int d1 = 7;
    for (int i = 0; i < 4; i++, d1 = d1 * 10)
    {
        printf("%8d\n", d1);
    }

    d1 = 7;
    for (int i = 0; i < 4; i++, d1 = d1 * 10)
    {
        printf("%-8d\n", d1);
    }

    printf("%10d\n", 1234);
    printf("%10.7d\n", 1234);
    printf("%7.6o\n", 1234);
    printf("%8.5x\n", 1234);
    printf("%#8.5x\n", 1234);

    printf("\b\n");
    printf("\f\n");
    printf("\n");
    printf("\r\n");
    printf("\t\n");
    printf("\"\n");
    printf("\'\n");
    printf("\0\n");
    printf("\\\n");
    printf("\v\n");
    printf("\a\n");

    return 0;
}
