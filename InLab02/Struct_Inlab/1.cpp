SCP createSCP(int id, int objClass, string speConProcedures, string description, string* addendums, int numAddendums) {
    SCP new_scp;
    new_scp.id=id;
    new_scp.objClass=objClass;
    new_scp.speConProcedures=speConProcedures;
    new_scp.description=description;
    new_scp.addendums=addendums;
    new_scp.numAddendums=numAddendums;
    return new_scp;
}