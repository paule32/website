Willkommen im LISP Land !
<p><b><?php
    for ($i = 0; $i < 26; $i++)
    echo "<a href='#" .
    strtolower(chr(65+$i)) . "'>" .
    strtoupper(chr(65+$i)) . "</a> ";?></b>
</p>
<table>
  <tr colspan="2">
    <td>
      <b><a href="#a"> A </a></b><p>
      <a href="./topic.php?t=append">APPEND</a>
      </p>
    </td>
  </tr>
  <tr>
    <td>
      <b><a href="#b"> B </a></b><p>
      <a href="./topic.php?t=boolean">boolsche Werte</a>
      </p>
    </td>
    <td><p><br>
      NIL oder T
      </p>
    </td>
  </tr>
  <tr>
    <td>
      <b><a href="#c"> C </a></b><p>
      <a href="./topic.php?t=car">car</a><br>
      <a href="./topic.php?t=cons">cons</a>
      </p>
    </td>
    <td> erstes Objekt in Liste auslesen</td>
  </tr>
  <tr>
    <td>
      <b><a href="#g"> G </a></b><p>
      <a href="./topic.php?t=genprog">Generische Programmierung</a>
      </p>
    </td>
  </tr>
  <tr>
    <td>
      <b><a href="#s"> M </a></b><p>
      <a href="./topic.php?t=member">member</a><br>
      <a href="./topic.php?t=member">member-if</a><br>
      <a href="./topic.php?t=member">member-if-not</a>
      </p><br>
    </td>
    <td valign="top">
      <br><br>
      Suche nach Element in Liste.
    </td>
  </tr>
  <tr>
    <td>
      <b><a href="#s"> S </a></b><p>
      <a href="./topic.php?t=symbols">Symbole</a>
      </p>
    </td>
  </tr>
</table>
