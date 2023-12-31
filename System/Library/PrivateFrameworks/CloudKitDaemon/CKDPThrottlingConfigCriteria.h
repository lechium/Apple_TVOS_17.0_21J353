//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKDPThrottlingConfigCriteria : PBCodable
{
    NSString *_bundleID;	// 8 = 0x8
    int _containerEnvironment;	// 16 = 0x10
    NSString *_containerName;	// 24 = 0x18
    int _databaseType;	// 32 = 0x20
    NSString *_invernessFunctionName;	// 40 = 0x28
    NSString *_invernessServiceName;	// 48 = 0x30
    NSString *_operationGroupName;	// 56 = 0x38
    int _operationType;	// 64 = 0x40
    NSString *_zoneName;	// 72 = 0x48
    struct {
        unsigned int containerEnvironment:1;
        unsigned int databaseType:1;
        unsigned int operationType:1;
    } _has;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000036785a
@property(retain, nonatomic) NSString *invernessFunctionName; // @synthesize invernessFunctionName=_invernessFunctionName;
@property(retain, nonatomic) NSString *invernessServiceName; // @synthesize invernessServiceName=_invernessServiceName;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *operationGroupName; // @synthesize operationGroupName=_operationGroupName;
@property(retain, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(retain, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000367641
- (unsigned long long)hash;	// IMP=0x000000000036751f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000036732f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000367199
- (void)copyTo:(id)arg1;	// IMP=0x000000000036705e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000366f1d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000366f10
- (id)dictionaryRepresentation;	// IMP=0x0000000000366492
- (id)description;	// IMP=0x00000000003663e3
@property(readonly, nonatomic) _Bool hasInvernessFunctionName;
@property(readonly, nonatomic) _Bool hasInvernessServiceName;
@property(readonly, nonatomic) _Bool hasBundleID;
@property(readonly, nonatomic) _Bool hasOperationGroupName;
@property(readonly, nonatomic) _Bool hasZoneName;
- (int)StringAsDatabaseType:(id)arg1;	// IMP=0x00000000003662c0
- (id)databaseTypeAsString:(int)arg1;	// IMP=0x0000000000366275
@property(nonatomic) _Bool hasDatabaseType;
@property(nonatomic) int databaseType; // @synthesize databaseType=_databaseType;
- (int)StringAsOperationType:(id)arg1;	// IMP=0x0000000000365bc8
- (id)operationTypeAsString:(int)arg1;	// IMP=0x0000000000365757
@property(nonatomic) _Bool hasOperationType;
@property(nonatomic) int operationType; // @synthesize operationType=_operationType;
- (int)StringAsContainerEnvironment:(id)arg1;	// IMP=0x0000000000365682
- (id)containerEnvironmentAsString:(int)arg1;	// IMP=0x000000000036562c
@property(nonatomic) _Bool hasContainerEnvironment;
@property(nonatomic) int containerEnvironment; // @synthesize containerEnvironment=_containerEnvironment;
@property(readonly, nonatomic) _Bool hasContainerName;

@end

