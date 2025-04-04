string convertToString(SCP obj) {
    ostringstream oss;
    if(obj.id<10)
    oss << "Item #: SCP-" << '0'<<'0'<< obj.id << "\n";
    if(obj.id>10&&obj.id<100)
    oss << "Item #: SCP-" << '0'<< obj.id << "\n";
    if(obj.id>100)
    oss << "Item #: SCP-"<< obj.id << "\n";
    oss << "Object Class: ";
    switch (obj.objClass) {
        case 0:
            oss << "Safe";
            break;
        case 1:
            oss << "Euclid";
            break;
        case 2:
            oss << "Keter";
            break;
        default:
            oss << "Unknown";
            break;
    }
    oss << "\n";
    oss << "Special Containment Procedures: " << obj.speConProcedures << "\n";
    oss << "Description: " << obj.description << "\n";
    for (int i = 0; i < obj.numAddendums; i++) {
        oss   << obj.addendums[i] << "\n";
    }
    return oss.str();
}