<div style="background-color:yellow;">
  <hr>
    <b>Typ: Funktion</b>
  <hr>
</div>
<p>
<b><font color="blue">Beschreibung</font></b>
</p>
Mittels <b>CAR</b> kann das erste Objekt in einer Liste ausgelesen werden.
<p>
<font color="blue"><b>Syntax:</b></font></p>
<table>
<tr><td>Anweisung</td><td>Resultat</td></tr>
<tr><td>car</td><td> => Objekt </td></tr>
<tr><td>(setf (car x) neues-Objekt)</td></tr>
</table><br>
<font color="blue"><b>Beispiele:</b></font></p>
<table>
<tr><td width="180px">Anweisung         </td><td>Resultat</td></tr>
<tr><td>(CAR '( A . B ))  </td><td> => A       </td></tr>
<tr><td>(CAR '( A B ))    </td><td> => A       </td></tr>
<tr><td>(CAR '(( 1 2 3 )))</td><td> => (1 2 3) </td></tr>
</table>
<hr>
<font color="blue"><b><i>Siehe auch:</i></b></font><p>
CDR, CAAR, CADR, CDAR, CDDR, CAAAR, CAADR, CADAR, CADDR, CDAAR, <br>
CDADR, CDDAR, CDDDR, CAAAAR, CAAADR, CAADAR, CAADDR, CADAAR, CADADR, <br>
CADDAR, CADDDR, CDAAAR, CDAADR, CDADAR, CDADDR, CDDAAR, CDDADR, CDDDAR, <br>
CDDDDR
</p>