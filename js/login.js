function cookiesEnabled () {
    let cookieEnabled = (navigator.cookieEnabled) ? true : false;

    if (typeof navigator.cookieEnabled == "undefined" && !cookieEnabled) { 
        document.cookie = "radcookie";
        cookieEnabled   = (document.cookie.indexOf("radcookie") != -1) ? true : false;
    }
    return (cookieEnabled);
}

function cookieClickOk()
{
    if (cookiesEnabled()) {
    window.location.href = "http://localhost/cookie.php?cookie=f";
    }
}

