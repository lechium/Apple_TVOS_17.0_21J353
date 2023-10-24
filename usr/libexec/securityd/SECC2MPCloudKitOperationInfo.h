//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SECC2MPCloudKitOperationInfo : PBCodable
{
    unsigned int _operationGroupIndex;	// 8 = 0x8
    NSString *_operationId;	// 16 = 0x10
    NSString *_operationType;	// 24 = 0x18
    _Bool _operationTriggered;	// 32 = 0x20
    struct {
        unsigned int operationGroupIndex:1;
        unsigned int operationTriggered:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0020000000159b25
@property(nonatomic) unsigned int operationGroupIndex; // @synthesize operationGroupIndex=_operationGroupIndex;
@property(nonatomic) _Bool operationTriggered; // @synthesize operationTriggered=_operationTriggered;
@property(retain, nonatomic) NSString *operationType; // @synthesize operationType=_operationType;
@property(retain, nonatomic) NSString *operationId; // @synthesize operationId=_operationId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000159a1b
- (unsigned long long)hash;	// IMP=0x001000000015997d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000159867
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000015978c
- (void)copyTo:(id)arg1;	// IMP=0x00100000001596ec
- (void)writeTo:(id)arg1;	// IMP=0x001000000015963e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000159631
- (id)dictionaryRepresentation;	// IMP=0x00100000001594e9
- (id)description;	// IMP=0x001000000015943a
@property(nonatomic) _Bool hasOperationGroupIndex;
@property(nonatomic) _Bool hasOperationTriggered;
@property(readonly, nonatomic) _Bool hasOperationType;
@property(readonly, nonatomic) _Bool hasOperationId;

@end
