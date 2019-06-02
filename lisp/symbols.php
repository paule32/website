<div style="background-color:yellow;"><hr><b>Symbole</b><hr></div>
<p>
<div style="height:120vh;">
<b><font color="blue">Beschreibung</font></b>
</p>
Ein Symbol ist eine Zeichenkette.<br>
Es gibt Einschränkungen, wie die Zeichenkette zusammen gesetzt werden kann.<br>
Solange man Buchstaben, Zahlen oder Bindestriche verwendet, ist man auf der sicheren Seite.<br>
<br>
Beispiele für Symbole:<br>
1. a   <br>
2. b   <br>
3. c1  <br>
4. foo <br>
5. bar <br>
6. baaz-quux-garphy
<p>
Beispiele für die Verwendung von Symbolen folgenden nun.<br>
Hinweis:<br>
Das Zeichen <b>></b> dient zur Veranschaulichung, was Sie normalerweise auf der LISP Interpreter Ebene eingeben.<br>
Das Zeichen <b>;</b> wird unter LISP als Kommentar gewertet. Alles was nach diesen Zeichen vorkommt wird von LISP ignoriert.
</p>
<table>
  <tr>
    <td width="150px;"> <b> > </b> (setq a 5) </td>
    <td> ; speichert  eine Zahl als Wert des Symbols a </td>
  </tr>
  <tr colspan="2">
    <td>5</td>
  </tr>
  <tr>
    <td> <b> > </b> a </td>
    <td> ; gibt den Wert des Symbols <b>a</b> aus</td>
  </tr>
  <tr colspan="2">
    <td>5</td>
  </tr>
  <tr>
    <td> <b> > </b> (let ((a 6)) a) </td>
    <td> ; bindet den Wert des Symbols <b>a</b> vorübergehend zu 6 </td>
  </tr>
  <tr colspan="2">
    <td>6</td>
  </tr>
  <tr>
   <td> <b> > </b> a </td>
   <td> ; gibt den Wert 5 aus, da LET außerhalb vom <a href="docheader.php?topic=scope"><b>Scope</b></a> ist</td>
  </tr>
  <tr>
    <td> <b> > </b> (+ a 6) </td>
    <td> ; benutzt den Wert vom Symbol a als Argument der + Funktion </td>
  </tr>
  <tr colspan="2">
    <td> 11 </td>
  </tr>
  <tr>
    <td> <b> > </b> b </td>
    <td> ; versucht den Wert vom Symbol b zu Ermitteln.<br>
         ; Dieser hat jedoch keinen Wert, so dass die Ausführung mit einem Fehler endet</td>
  </tr>
</table>
<p>
Es gibt in Common Lisp 2 spezielle Symbole; T und NIL.<br>
Der Wert von T is immer als Wahr (True) definiert.<br>
Und der Wert von NIL ist immer als Falsch oder Leer (False) definiert.<br>
LISP repräsentiet diese 2 Symbole als Wahrheitswerte vom Typ wahr oder falscg.
<p>
Die Symbole T und NIL werden auch als "Selbst-Auswertende" Symbole bezeichnet,<br>
weil sie sich auf sich selbst beziehen.
</p>
Es gibt noch eine andere Art der Selbstauswertung. Diese Symbole werden auch als
Schlüssel-Werte bezeichnet.<br>
Man kann sie an den führenden <b>:</b> erkennen. Beispiele sind:
<p>
<font color="blue"><b>Beispiel:</b></font>
<table>
  <tr>
    <td> <b> > </b> :dies-ist-ein-keywort </td>
  </tr>
  <tr>
    <td> :DIES-IST-EIN-KEYWORT </td>
  </tr>
</table>
</p>
</p>
</div>