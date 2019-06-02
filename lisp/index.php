<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <meta http-equiv="content-type" content="text/html; charset=utf-8">
    <meta http-equiv="expires" content="0" />
    <meta http-equiv="cache-control" content="max-age=0" />
    <meta http-equiv="cache-control" content="no-cache" />
    <meta http-equiv="pragma" content="no-cache" />
    <title>LISP Dokumentation</title>

    <link   type='text/css' rel='stylesheet' href="https://use.fontawesome.com/releases/v5.6.3/css/all.css"/>
    <link   type='text/css' rel="stylesheet" href="../css/front.css"/>
    <link   type='text/css' rel="stylesheet" href="../inc/body.css"/>
    <link   type='text/css' rel="stylesheet" href="../inc/footer.css"/>

    <script type="text/javascript" src="/jquery/jquery.min.js"></script>
  </head>
  <body>
    <div id="siteheader">
        <div id="header">
	    <div id="headertext">
                <div class="menu0">Support</div>
	        <div class="menu0">Newsletter</div>
	        <div class="menu0"><i class='far fa-envelope' style='font-size:16px'></i> Kontakt</div>
            </div>
	    <div id="logobar">
                KALLUP non-profit
	        <div id="startfree">
                    <script type="text/javascript">
                    function startRAD() {window.location.href = "/lisp/docindex.php";
                    }
                    </script>
                <div class="okButton" onclick="startRAD()">GOTO Docs</div>
                </div>
	    </div>
        <apanav><div id="apache2"></div></apanav>
    </div>
	<div id="welcome">
		<div id="banner">
		    <div id="motto">
        		<div id="mottohead">Common LISP - Dokumentation</div>
        		<div id="headtxt">  MODERNE SOFTWAREENTWICKLUNG</div>
        		<div id="firma">    KALLUP non-profit</div>
		    </div>
		</div>
		<div id="info">
		    Die schnelle Anwendungsentwicklung „Rapid Application Development“ (RAD) umfasst eine Herangehensweise in der Programmierung,
		    bei der eine kontinuierliche Entwicklungsumgebung die Basis ist.
		    Dadurch lassen sich Änderungen schneller als bei der traditionellen Methode der Anwendungsentwicklung umsetzen.
		</div>
		<div id="historie">
		    HISTORIE
		    <div id="histtext">
    		Mit dem Ziel den bisherigen, aufwändigen Softwareentwicklungsprozess zu beschleunigen und flexibler zu gestalten,
    		entwickelten Brian Gallagher, Alex Balchin, Barry Boehm und Scott Shultz in den 1970er 
    	    Jahren den Ansatz des Rapid Application Developments.
    		<p>
    		Berühmt wurde die schnelle Anwendungsentwicklung erst einige Jahre später. Anfang der 1990er Jahre entwickelte
    		der britische Informationstechnologie-Berater und Autor, James Martin eine Methode, welche auf eine iterative
    		Entwicklung und den Bau von Prototypen fußt.
    		<p>
    		Bis heute wird der Rapid Application Development Ansatz im Entwicklungsumfeld vielfältig eingesetzt.
    		So stellt beispielsweise diese Low-Code Plattform eine Technologie zur Verfügung, mit der integrierte
    		Anwendungen ressourcenschonend konfiguriert werden können.<br>
    		Wiederverwendbare Bausteine und die Nutzung bestehender IT-Systeme sorgen für die notwendige Effizienz
    		bei der Digitalisierung von Unternehmensprozessen.
    		<p>
    		Durch den Rapid Application Development Ansatz und das Rapid Prototyping ist es möglich,
    		eine umfassende und leistungsorientierte Applikation in kürzerer Zeit effektiv zu entwickeln.
		    </div>
		</div>
		<div id="advert">
		    Falls Sie dieses Projekt unterstützen möchten,<br>können Sie Spenden:
		    <div id="wertext">
                <form action="https://www.paypal.com/cgi-bin/webscr" method="post" target="_top">
                    <input type="hidden" name="cmd" value="_s-xclick" />
                    <input type="hidden" name="hosted_button_id" value="FBESEMEXP8HSL" />
                    <input type="image" src="https://www.paypalobjects.com/de_DE/DE/i/btn/btn_donateCC_LG.gif" border="0" name="submit"
                    title="PayPal - The safer, easier way to pay online!" alt="Donate with PayPal button" />
                    <img alt="" border="0" src="https://www.paypal.com/de_DE/i/scr/pixel.gif" width="1" height="1" />
                </form>
		    </div>
		</div>
		<div id="advert">
		    WERBUNG
		    <div id="wertext">
    		Hier könnte Ihre Werbung stehen...
		    </div>
		</div>
		<div id="advert">
		    IMPRESSUM
		    <div id="wertext">
    		    Jens Kallup<br>
    		    Im Entenbad 2<br>
    		    Haus 2<br>
    		    99820 - Behringen<br>
			    Deutschland<br>
		    </div>
		</div>
		<div id="advert">
		    DATENSCHUTZHINWEISE
            <div id="wertext">
    		    <div class="fontstyle1">1. Allgemeines</div>
    		    <div class="fontstyle2">
        		    Der Schutz Ihrer persönlichen Daten hat einen hohen Stellenwert. Es ist uns wichtig,
        		    Sie darüber zu informieren, welche persönlichen Daten wir während Ihres Besuchs auf
        		    unseren Webseiten und bei der Registrierung erfassen, wie diese verwendet werden und
        		    welche Gestaltungsmöglichkeiten Sie dabei haben. Dieser Datenschutzhinweis gibt Ihnen
        		    Antworten auf die wichtigsten Fragen.
                </div>
        		<div class="fontstyle1">2. Welche allgemeine Daten und Informationen werden erfasst?</div>
        		<div class="fontstyle2">
            		    Die Internetseite erfasst mit jedem Aufruf durch eine betroffene Person oder ein
            		    automatisiertes System eine Reihe von allgemeinen Daten und Informationen.
            		    Diese allgemeinen Daten und Informationen werden in den Logfiles des Servers gespeichert.
            		    Erfasst werden können die
            		    <ul> 
                		<li>verwendeten Browsertypen und Versionen,</li>
                		<li>das von dem zugreifenden System verwendete Betriebssystem,</li>
                		<li>die Internetseite, von welcher ein zugreifendes System auf unsere Internetseite gelangt (sog. Referrer),</li>
                		<li>die Unterwebseiten, welche über ein zugreifendes System auf unserer Internetseite angesteuert werden,</li>
                		<li>das Datum und die Uhrzeit eines Zugriffs auf die Internetseite,</li>
                		<li>eine Internetprotokolladresse (IP-Adresse),</li>
                		<li>der Internet-Service-Provider des zugreifenden Systems und</li>
                		<li>sonstige ähnliche Daten und Informationen, die der Gefahrenabwehr im Fall von Angriffen auf 
                    		unsere informationstechnischen Systeme dienen.</li>
            		    </ul>
        		</div>
        		<div class="fontstyle1">3. Wann und zu welchem Zweck werden allgemeine Daten und Informationen erhoben?</div>
        		<div class="fontstyle2">
			        Aus der Nutzung der allgemeinen Daten und Informationen werden keine Rückschlüsse auf die betroffene Person bezogen.
            		    Diese Informationen werden vielmehr benötigt, um die Inhalte unserer Internetseite korrekt auszuliefern, die Inhalte
            		    unserer Internetseite sowie die Werbung für diese zu optimieren, die dauerhafte Funktionsfähigkeit unserer
            		    informationstechnologischen Systeme und der Technik unserer Internetseite zu gewährleisten sowie um
            		    Strafverfolgungsbehörden im Fall eines Cyberangriffs die zur Strafverfolgung notwendigen Informationen bereitzustellen.
            		    <p>
            		    Diese anonym erhobenen Daten und Informationen werden daher einerseits statistisch und ferner mit dem Ziel ausgewertet,
            		    den Datenschutz und die Datensicherheit in unserem Unternehmen zu erhöhen, um letztlich ein optimales Schutzniveau für
            		    die von uns verarbeiteten personenbezogenen Daten sicherzustellen.<br>
            		    Die anonymen Daten der Server-Logfiles werden getrennt von allen durch einen betroffenen Person angegebenen personenbezogenen
            		    Daten gespeichert.
        		</div>
        		<div class="fontstyle1">
            		    4. Wann müssen personenbezogene Daten bereitgestellt werden, gibt es hierzu eine Verpflichtung und was sind die
            		    Folgen der Nichtbereitstellung?
        		</div>
		        <div class="fontstyle2">
            		    Es werden Daten nur zur Erhebung, Speicherung oder Verarbeitung die Ausübung eigener Geschäftszwecke gesammelt.
            		    <br>
            		    Grundsätzlich stehen unsere Websites allen Nutzern zur Verfügung, ohne dass persönliche Daten erhoben werden.
            		    Personenbezogene Daten werden ausschließlich in dem Umfang abgefragt, verarbeitet und genutzt, in dem es
            		    erforderlich ist, um von Ihnen abgefragte Leistungen zu erbringen oder Inhalte bereitzustellen.
            		    <br>
            		    Die Bereitstellung personenbezogener Daten ist zum Teil gesetzlich vorgeschrieben
            		    (z.B. auf Grund von Steuervorschriften) oder kann sich aus vertraglichen Regelungen
            		    (z.B. Angaben zum Vertragspartner) ergeben.
            		    Bei Vertragsabschluss kann es erforderlich sein, dass Sie uns personenbezogene Daten zur Verfügung stellen,
            		    die in der Folge durch uns verarbeitet werden müssen, da andernfalls der Vertrag mit Ihnen nicht geschlossen
            		    werden kann.
            		    Vor einer Bereitstellung personenbezogener Daten können Sie sich mit unsrem Datenschutzbeauftragten in
            		    Verbindung setzten.
            		    Dieser kann sie einzelfallbezogen darüber aufklären, ob die Bereitstellung Ihrer personenbezogenen Daten
            		    gesetzlich oder vertraglich vorgeschrieben oder für den Vertragsabschluß erforderlich ist und welche Folgen
            		    die Nichtbereitstellung der personenbezogenen Daten hat.
        		</div>
        		<div class="fontstyle1">5. Einsatz von Cookies</div>
        	        <div class="fontstyle2">
            		    Teilweise werden auf unseren Websites „Cookies“ eingesetzt. Hinter dieser Standardtechnologie verbergen
            		    sich kleine Textdateien, die auf dem von Ihnen verwendeten Gerät gespeichert werden und die es unter
            		    anderem möglich machen, den Besuch einer Webseite komfortabler oder sicherer zu gestalten. Auch können Cookies
            		    dazu dienen, das Angebot auf einer Webseite besser auf die Interessen der Besucher abzustimmen oder auf Basis
            		    statistischer Auswertungen allgemein zu verbessern.
            		    <p>
            		    Sie können selbst bestimmen, ob der von Ihnen verwendete Browser Cookies erlaubt oder nicht. Bitte beachten Sie,
            		    dass die Funktionalität von Webseiten eingeschränkt oder sogar aufgehoben sein kann, wenn Cookies nicht erlaubt sind.
            		    <p>
            		    Soweit Sie uns durch Ihre Browsereinstellungen oder Zustimmung die Verwendung von Cookies erlauben, können folgende
            		    Cookies auf unseren Webseiten zum Einsatz kommen:
            		    <p>
            		    Website Session Cookies:<br>
            		    Diese Cookies dienen als Identifikationsmerkmal für die Dauer des Besuchs auf unseren Webseiten.<br>
            		    Dies gilt nur für die aktuelle Sitzung.
            		    <p>
        		</div>
        		<div class="fontstyle1">6. Wo werden Ihre Daten verarbeitet?</div>
        		<div class="fontstyle2">
            		    Ihre Daten werden grundsätzlich in Deutschland verarbeitet.
            		    Nur in Einzelfällen und im gesetzlich zulässigen Rahmen findet die Datenverarbeitung auch im Ausland statt.
        		</div>
        		<div class="fontstyle1">7. Änderung unserer Datenschutzbestimmungen</div>
        		<div class="fontstyle2">
            		    Wir behalten uns vor, diese Datenschutzerklärung gelegentlich anzupassen,
            		    damit sie stets den aktuellen rechtlichen Anforderungen entspricht oder um Änderungen unserer
            		    Leistungen in der Datenschutzerklärung umzusetzen, z. B. bei der Einführung neuer Services.
            		    Ihnen steht generell ein Widerrufsrecht hinsichtlich Ihrer erteilten Einwilligungen zu.
            		    Bitte beachten Sie, dass (sofern Sie keinen Gebrauch von Ihrem Widerrufsrecht machen) die jeweils
            		    aktuelle Version der Datenschutzerklärung die gültige ist.
        		</div>
		    </div>
        </div>
	    <div id="advert">
	        Allgemeine Geschäfts Bededingungen - AGB's
            <div class="fontstyle1"></div>
            <div class="fontstyle2">
                454545
                <p></p>
                <p></p><p></p>
            </div>
        </div>
    </div>
    	<div id="sitefooter">
		    <div id="footertext">
		        <div class="footnavi">
        			NAVIGATION
        		    <div class="navi1">Home</div>
        			<div class="navi1">Help</div>
		        </div>
		        <div class="footnavi">
        			SERVICE
		            <div class="navi1">Kontakt</div>
		            <div class="navi1">Newsletter</div>
		            <div class="navi1">Support</div>
		        </div>
		        <div class="footnavi">
        			KALLUP non-profit
		            <div class="navi1">Im Entenbad 2</div>
		            <div class="navi1">Haus 2</div>
		            <div class="navi1">99820 Behringen</div>
		            <div class="navi1">Deutschland</div>
        	        <div class="navi1email">kallup.jens@web.de</div>
          	    </div>
		        <div class="footnavi">
        			NEWSLETTER
        		    <div class="abo">
        			    <form>
            		        <input type="text" maxlength="32" minlength="12" size="15" required><br>
            		        <input type="button" value="Abonieren">
        			    </form>
        			</div>
		        </div>
		    </div>
            <div id="copyright">
	            <div id="copytext">
			        Copyright 2019, KALLUP non-profit | Alle Rechte vorbehalten
			        <a href="#" id="impressum">   Impressum  </a> |
			        <a href="#" id="datenschutz"> Datenschutz</a>   |
			        <a href="#" id="agbs">        AGB</a>
	            </div>
	        </div>
		</div>
    </div>
  </body>
</html>
