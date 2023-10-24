//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ACLSNetworkUtilities : NSObject
{
}

+ (_Bool)areDigestedIdentifiers:(id)arg1 equalToCleartextIdentifiers:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x0040000000006b29
+ (_Bool)isDigestedIdentifier:(id)arg1 equalToCleartextIdentifier:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x00100000000067c4
+ (id)digestIdentifiers:(id)arg1 tag:(unsigned int)arg2;	// IMP=0x00100000000065d4
+ (id)digestIdentifier:(id)arg1 tag:(unsigned int)arg2;	// IMP=0x0010000000006301
+ (_Bool)makeLocalAddresses:(id *)arg1 andGatewayIdentifiers:(id *)arg2 tag:(unsigned int)arg3;	// IMP=0x0010000000004c96
+ (id)stringFromSockaddrStorage:(const struct sockaddr_storage *)arg1;	// IMP=0x0010000000004c28
+ (id)stringFromSockaddrDL:(const struct sockaddr_dl *)arg1;	// IMP=0x0010000000004af7
+ (id)stringFromSockaddr6:(const struct sockaddr_in6 *)arg1;	// IMP=0x0010000000004ae1
+ (id)stringFromSockaddr4:(const struct sockaddr_in *)arg1;	// IMP=0x0010000000004acb
+ (id)stringFromMacAddr:(char *)arg1;	// IMP=0x0010000000004a7d
+ (id)stringFromInaddr6:(const struct in6_addr *)arg1;	// IMP=0x00100000000049f5
+ (id)stringFromInaddr4:(const struct in_addr *)arg1;	// IMP=0x0010000000004975
+ (id)serviceIDFromKey:(id)arg1;	// IMP=0x001000000000487b
+ (_Bool)isWiredNetworkInterfaceType:(id)arg1;	// IMP=0x00100000000047a9
+ (_Bool)isAutomaticConfigMethod6:(id)arg1;	// IMP=0x001000000000478a
+ (_Bool)isAutomaticConfigMethod4:(id)arg1;	// IMP=0x00100000000046c9
+ (_Bool)isManualConfigMethod6:(id)arg1;	// IMP=0x00100000000046aa
+ (_Bool)isManualConfigMethod4:(id)arg1;	// IMP=0x001000000000468b
+ (_Bool)isUsefulInaddr6:(const struct in6_addr *)arg1;	// IMP=0x0010000000004640
+ (_Bool)isUsefulInaddr4:(const struct in_addr *)arg1;	// IMP=0x001000000000461a
+ (_Bool)isUsefulSockaddr6:(const struct sockaddr_in6 *)arg1;	// IMP=0x0010000000004604
+ (_Bool)isUsefulSockaddr4:(const struct sockaddr_in *)arg1;	// IMP=0x00100000000045ee
+ (_Bool)isShareableInaddr6:(const struct in6_addr *)arg1;	// IMP=0x00100000000045bb
+ (_Bool)isShareableInaddr4:(const struct in_addr *)arg1;	// IMP=0x0010000000004583
+ (_Bool)isShareableSockaddr6:(const struct sockaddr_in6 *)arg1;	// IMP=0x001000000000456d
+ (_Bool)isShareableSockaddr4:(const struct sockaddr_in *)arg1;	// IMP=0x0010000000004557
+ (id)createNetworkInterface:(struct __SCNetworkInterface *)arg1 service:(struct __SCNetworkService *)arg2 configInfo:(id)arg3;	// IMP=0x0010000000003f66
+ (double)speedFromEthernetMediaSubType:(id)arg1;	// IMP=0x0010000000003ed5
+ (id)allActiveNetworkInterfaces;	// IMP=0x0010000000002cd3
+ (id)netmask4ContainingStartAddress:(id)arg1 endAddress:(id)arg2;	// IMP=0x0010000000002b8c
+ (_Bool)hasUsefulUSBEthernetInterface;	// IMP=0x00100000000029f5

@end

