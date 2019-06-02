program tiefensuche;

var
    id, k : Integer;
    val   : Array [1..v-1] of Integer;

procedure visit(k: Integer);
var
    t : Zeiger;
begin
    id     := id + 1;
    val[k] := id;
    t      := adj[k];
    while t != null do begin
	if val[t^.v] = 0 then
	visit (t^.v);
	t := t^.next;
    end;
end;

begin
    id := 0;
    for k := 0 to (v-1) do val[k] := 0;
    for k := 0 to (v-1) do if val[k] = 0 then visit(k);
end.