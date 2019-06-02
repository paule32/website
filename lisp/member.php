<style>
tr.bottom  td { border-bottom: 2px solid cyan; }
tr.bottom2 td { border-bottom: 2px solid cyan; }
</style>
<div style="background-color:yellow;">
  <hr>
  <b>Typ:</b> <i>Funktion</i>
  <hr>
</div><br>
<b><i><font color="blue">Beschreibung:</font></i></b><p>
Kann verwendet werden, um Elemente in einer Liste zu finden. Das Resultat ist<br>
eine Liste.</p>
<b><i><font color="blue">Syntax:</font></i></b><br>&nbsp;
<table>
  <tr class="bottom2">
    <td><i>Anweisung</i></td>
    <td><i>Resultat</i></td>
  </tr>
  <tr>
    <td width="420px">
        <b>member</b> Objekt Liste                              <br>
        <b>member</b> Objekt Liste key :test     #'= :key #'cdr <br>
        <b>member</b> Objekt Liste key :test-not #'= :key #'cdr <br>
    </td>
    <td>
        => Liste <br>
        => Liste <br>
        => Liste
    </td>
  </tr>
</table>
<p></p>
<table>
  <tr><td><b>member-if</b>     </td><td width="287px">Aussage Liste [key] </td><td> => Liste </td></tr>
  <tr><td><b>member-if-not</b> </td><td>Aussage Liste [key] </td><td> => Liste</td></tr>
</table>
<hr>
<p><b><i><font color="blue">Argumente und Werte:</font></i></b></p>
<table>
  <tr class="bottom">
    <td><i>Argument</i></td>
    <td><i>| Beschreibung</i></td>
  </tr>
  <tr>
    <td valign="top"><br><i>Objekt:</i></td>
    <td><br>
    Ein Objekt bezieht sich auf ein im Kontext stehendes Element.<br>
    Arten von Elementen können sein:
      <ul>
        <li>Bezeichner,</li>
        <li>Funktionen,</li>
        <li>Klassen</li>
      </ul>
    </td>
  </tr>
  <tr>
    <td valign="top"><i>Liste:</i></td>
    <td>
    Hierbei kann es sich um eine Kette handeln, die mit Hilfe von <b>CONS</b> zusammen gesetzt wurde,<br>
    die wiederrum eine
    Kette von Ketten (Listen) enthalten kann.<br>
    Man kann diese Kette auch durch Anwendung von <b>CAR</b> etc. wohlformend machen.<br>
    Eine andere Art von Listen sind:
    <ul>
      <li>Jedes Objekt, das nicht aus CONS zusammen gesetzt wurde,</li>
      <li>Listen, die mit einer leeren Liste enden; <br>
          leere Listen haben die Form: ( )<br>
          leere Listen sind Listen, die keine Elemente besitzen.<br>
          Das Objekt darf nicht NIL zurückgeben !<br>
          Ein Vektor für das Objekt ist jedoch erlaubt.<p>
          <table>
          <tr>
          <td valign="top">Hinweis:</td>
          <td>"atom" Objekte an sich sind keine <i>dottet Listen</i> !<br>
          dottet Listen bestehen immer aus 2 Objekten: ( A . B ),<br>
          Atom-Objekte sind die kleinsten Objekte, die LISP verstehen kann: ( A ).<br>
          <br>
          Eine solche Liste bezeichnet man auch als <b><i>Paar</i></b><br>
          Ein Paar besteht somit aus 2 Teilen bzw. 2 Listenzellen.<br>
          Während auf die erste Listenzelle mittels <a href="./topic.php?t=car"><b>CAR</b></a> :(Zeiger auf) 1, <br>
          kann auf die zweite Listenzelle mit <b>CDR</b> :(Zeiger auf) 2 <br>
          zugegriffen werden..
          </p>
          </td></tr></table> </li>
      <li>circular Listen:<br>
          Dies sind Ketten von CONS, die kein Ende haben; sie rufen sich gegenseitig
          selber auf</li>
    </ul>
    </td>
  </tr>
  <tr>
    <td valign="top">key</td>
    <td><p>
    Ein Bezeichner von einen anderen Objekt oder ein Operator oder Funktion.<br>
    Es kann hier auch das Symbol <b>NIL</b> verwendet werden.<br>
    &nbsp;
    </p>
    </td>
  </tr>
  <tr>
    <td valign="top" width="82px"><i>test:</i></td>
    <td>
    Ein Bezeichner einer Funktion mit 2 Argumenten;<br>
    Rückgabewert des benutzten Objekts ist ein Wahrheitswert.<br>
    Der Wert ist <b>NIL</b> (Falsch/False) wenn alle anderen Objekte
    nicht <b>T</b> (Wahr/True) entsprechen.<br>
    Informationen hierzu finden Sie unter <a href="./topic.php?t=boolean">
    boolsche Werte</a>.<br>
    &nbsp;
    </td>
  </tr>
  <tr>
    <td valign="top"><i>test-not</i></td>
    <td>
    Ein Bezeichner einer Funktion mit 2 Argumenten;<br>
    Diese Argumente sind das Gegenteil (NOT) zu <i>test</i>.
    </td>
  </tr>
  <tr>
    <td valign="top"><br><i>Aussage:</i></td>
    <td><br>
    Ein Bezeichner einer Funktion mit 1 Argumenten;<br>
    Der Rückgabewert ist ein Wahrheitswert (siehe: <a href="./topic.php?t=boolean">
    boolsche Werte</a>
    </td>
  </td>
  </tr>
</table>
<br><br>
<b><i><font color="blue">Beispiele:</font></i></b><br><br>
<div>
<table>
<tr><td>(member 2 '(1 2 3))                                    </td><td> => (2 3)     </td></tr>
<tr><td>(member 2 '((1 . 2) (3 . 4)) :test-not #'= :key #'cdr) </td><td> => (3 . 4)   </td></tr>
<tr><td>(member 'e '(a b c d))                                 </td><td> => NIL       </td></tr>
<tr colspan="2"><td>&nbsp;</td></tr>
<tr><td>(member-if #'listp '(a b nil c d))                     </td><td> => (NIL C D)  </td></tr>
<tr><td>(member-if #'numberp '(a #\Space 5/3 foo))<br>&nbsp;   </td><td valign="top"> =>  (5/3 FOO) </td></tr>
<tr><td>(member-if-not #'zerop <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  '(3 6 9 11 . 12) <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  :key #'(lambda (x) (mod x 3))) </td><td valign="bottom"> =>  (11 . 12) </td></tr>
</table>
<p><hr></p>
<font color="blue"><b><i>Siehe auch:</i></b></font><br><br>
find, position
<br>
<br>