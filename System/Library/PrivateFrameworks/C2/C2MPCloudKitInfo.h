//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface C2MPCloudKitInfo : PBCodable
{
    unsigned long long _reportClientOperationFrequency;	// 8 = 0x8
    unsigned long long _reportClientOperationFrequencyBase;	// 16 = 0x10
    unsigned long long _reportOperationGroupFrequency;	// 24 = 0x18
    unsigned long long _reportOperationGroupFrequencyBase;	// 32 = 0x20
    NSString *_applicationBundleIdentifierOverrideForContainerAccess;	// 40 = 0x28
    NSString *_applicationBundleIdentifierOverrideForNetworkAttribution;	// 48 = 0x30
    NSString *_clientBundleId;	// 56 = 0x38
    NSMutableArray *_clientOperations;	// 64 = 0x40
    NSString *_clientProcessVersion;	// 72 = 0x48
    NSString *_container;	// 80 = 0x50
    NSString *_containerScopedDeviceIdentifier;	// 88 = 0x58
    NSString *_containerScopedUserIdentifier;	// 96 = 0x60
    NSString *_databaseScope;	// 104 = 0x68
    NSString *_environment;	// 112 = 0x70
    NSMutableArray *_operationGroups;	// 120 = 0x78
    _Bool _anonymous;	// 128 = 0x80
    struct {
        unsigned int reportClientOperationFrequency:1;
        unsigned int reportClientOperationFrequencyBase:1;
        unsigned int reportOperationGroupFrequency:1;
        unsigned int reportOperationGroupFrequencyBase:1;
        unsigned int anonymous:1;
    } _has;	// 132 = 0x84
}

+ (Class)clientOperationType;	// IMP=0x0010000000016f33
+ (Class)operationGroupType;	// IMP=0x0010000000016dc9
- (void).cxx_destruct;	// IMP=0x0000000000019547
@property(nonatomic) unsigned long long reportClientOperationFrequencyBase; // @synthesize reportClientOperationFrequencyBase=_reportClientOperationFrequencyBase;
@property(nonatomic) unsigned long long reportClientOperationFrequency; // @synthesize reportClientOperationFrequency=_reportClientOperationFrequency;
@property(retain, nonatomic) NSMutableArray *clientOperations; // @synthesize clientOperations=_clientOperations;
@property(nonatomic) unsigned long long reportOperationGroupFrequencyBase; // @synthesize reportOperationGroupFrequencyBase=_reportOperationGroupFrequencyBase;
@property(nonatomic) unsigned long long reportOperationGroupFrequency; // @synthesize reportOperationGroupFrequency=_reportOperationGroupFrequency;
@property(retain, nonatomic) NSMutableArray *operationGroups; // @synthesize operationGroups=_operationGroups;
@property(retain, nonatomic) NSString *databaseScope; // @synthesize databaseScope=_databaseScope;
@property(retain, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution; // @synthesize applicationBundleIdentifierOverrideForNetworkAttribution=_applicationBundleIdentifierOverrideForNetworkAttribution;
@property(retain, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess; // @synthesize applicationBundleIdentifierOverrideForContainerAccess=_applicationBundleIdentifierOverrideForContainerAccess;
@property(retain, nonatomic) NSString *containerScopedDeviceIdentifier; // @synthesize containerScopedDeviceIdentifier=_containerScopedDeviceIdentifier;
@property(retain, nonatomic) NSString *containerScopedUserIdentifier; // @synthesize containerScopedUserIdentifier=_containerScopedUserIdentifier;
@property(nonatomic) _Bool anonymous; // @synthesize anonymous=_anonymous;
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *container; // @synthesize container=_container;
@property(retain, nonatomic) NSString *clientBundleId; // @synthesize clientBundleId=_clientBundleId;
@property(retain, nonatomic) NSString *clientProcessVersion; // @synthesize clientProcessVersion=_clientProcessVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000018f56
- (unsigned long long)hash;	// IMP=0x0000000000018d53
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000018a1d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001851d
- (void)copyTo:(id)arg1;	// IMP=0x000000000001820b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000017e35
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000017e28
- (id)dictionaryRepresentation;	// IMP=0x0000000000017083
- (id)description;	// IMP=0x0000000000016fd4
@property(nonatomic) _Bool hasReportClientOperationFrequencyBase;
@property(nonatomic) _Bool hasReportClientOperationFrequency;
- (id)clientOperationAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000016f16
- (unsigned long long)clientOperationsCount;	// IMP=0x0000000000016ef9
- (void)addClientOperation:(id)arg1;	// IMP=0x0000000000016e8f
- (void)clearClientOperations;	// IMP=0x0000000000016e72
@property(nonatomic) _Bool hasReportOperationGroupFrequencyBase;
@property(nonatomic) _Bool hasReportOperationGroupFrequency;
- (id)operationGroupAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000016dac
- (unsigned long long)operationGroupsCount;	// IMP=0x0000000000016d8f
- (void)addOperationGroup:(id)arg1;	// IMP=0x0000000000016d25
- (void)clearOperationGroups;	// IMP=0x0000000000016d08
@property(readonly, nonatomic) _Bool hasDatabaseScope;
@property(readonly, nonatomic) _Bool hasApplicationBundleIdentifierOverrideForNetworkAttribution;
@property(readonly, nonatomic) _Bool hasApplicationBundleIdentifierOverrideForContainerAccess;
@property(readonly, nonatomic) _Bool hasContainerScopedDeviceIdentifier;
@property(readonly, nonatomic) _Bool hasContainerScopedUserIdentifier;
@property(nonatomic) _Bool hasAnonymous;
@property(readonly, nonatomic) _Bool hasEnvironment;
@property(readonly, nonatomic) _Bool hasContainer;
@property(readonly, nonatomic) _Bool hasClientBundleId;
@property(readonly, nonatomic) _Bool hasClientProcessVersion;

@end

