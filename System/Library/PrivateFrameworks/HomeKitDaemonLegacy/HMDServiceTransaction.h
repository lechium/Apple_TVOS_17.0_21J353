//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSObject, NSString;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface HMDServiceTransaction
{
    NSString *_lastSeenConfiguredNameLocal;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_configurationTracker;	// 16 = 0x10
}

+ (id)properties;	// IMP=0x0060000000539fe4
- (void).cxx_destruct;	// IMP=0x0000000000539fb3
@property(retain, nonatomic) NSObject<OS_dispatch_group> *configurationTracker; // @synthesize configurationTracker=_configurationTracker;
@property(retain, nonatomic) NSString *lastSeenConfiguredNameLocal; // @synthesize lastSeenConfiguredNameLocal=_lastSeenConfiguredNameLocal;

// Remaining properties
@property(retain, nonatomic) NSString *associatedServiceType; // @dynamic associatedServiceType;
@property(retain, nonatomic) NSArray *characteristics; // @dynamic characteristics;
@property(retain, nonatomic) NSNumber *configurationState; // @dynamic configurationState;
@property(retain, nonatomic) NSString *expectedConfiguredName; // @dynamic expectedConfiguredName;
@property(retain, nonatomic) NSNumber *hidden; // @dynamic hidden;
@property(retain, nonatomic) NSNumber *instanceID; // @dynamic instanceID;
@property(retain, nonatomic) NSNumber *labelIndex; // @dynamic labelIndex;
@property(retain, nonatomic) NSNumber *labelNamespace; // @dynamic labelNamespace;
@property(retain, nonatomic) NSNumber *lastKnownDiscoveryMode; // @dynamic lastKnownDiscoveryMode;
@property(retain, nonatomic) NSNumber *lastKnownOperatingState; // @dynamic lastKnownOperatingState;
@property(retain, nonatomic) NSNumber *lastKnownOperatingStateAbnormalReasons; // @dynamic lastKnownOperatingStateAbnormalReasons;
@property(retain, nonatomic) NSArray *linkedServices; // @dynamic linkedServices;
@property(retain, nonatomic) NSArray *mediaSourceDisplayOrder; // @dynamic mediaSourceDisplayOrder;
@property(retain, nonatomic) NSNumber *mediaSourceIdentifier; // @dynamic mediaSourceIdentifier;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSNumber *primary; // @dynamic primary;
@property(retain, nonatomic) NSString *providedName; // @dynamic providedName;
@property(retain, nonatomic) NSNumber *serviceProperties; // @dynamic serviceProperties;
@property(retain, nonatomic) NSString *serviceSubtype; // @dynamic serviceSubtype;
@property(retain, nonatomic) NSString *serviceType; // @dynamic serviceType;

@end

