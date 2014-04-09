 IpHeaderType* ipHeader = NULL;
 ipHeader = (IpHeaderType*) MESSAGE_ReturnPacket(msg);
 SetIPv4AddressInfo(&src,ipHeader->ip_src);
   fprintf(fp, "%u, %d; %s; %u %c; ",
00279         msg->originatingNodeId,
00280         msg->sequenceNumber,
00281         clockStr,
00282         node->nodeId,
00283         sendOrReceive);

