//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSURI, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDAccountHandleModel
{
}

+ (id)properties;	// IMP=0x00100000005fae86
+ (id)schemaHashRoot;	// IMP=0x00100000005fae65
+ (Class)cd_entityClass;	// IMP=0x00100000002bacc1
+ (id)cd_parentReferenceName;	// IMP=0x00100000002bacb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) IDSURI *idsURI; // @dynamic idsURI;
@property(retain, nonatomic) NSNumber *local; // @dynamic local;
@property(readonly) Class superclass;

@end
