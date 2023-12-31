//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPRecordIdentifier, NSMutableArray, NSString;

@interface CKDPMarkAssetBrokenRequest : PBRequest
{
    NSString *_affectedRecordType;	// 8 = 0x8
    CKDPRecordIdentifier *_brokenAssetRecordID;	// 16 = 0x10
    NSString *_fieldName;	// 24 = 0x18
    NSMutableArray *_fileSignatures;	// 32 = 0x20
    int _listIndex;	// 40 = 0x28
    NSMutableArray *_referenceSignatures;	// 48 = 0x30
    _Bool _isPackage;	// 56 = 0x38
    _Bool _skipWriteMissingAssetStatusRecord;	// 57 = 0x39
    struct {
        unsigned int listIndex:1;
        unsigned int isPackage:1;
        unsigned int skipWriteMissingAssetStatusRecord:1;
    } _has;	// 60 = 0x3c
}

+ (Class)referenceSignatureType;	// IMP=0x0010000000273dc6
+ (Class)fileSignatureType;	// IMP=0x0010000000273cf4
+ (id)options;	// IMP=0x0010000000273b74
- (void).cxx_destruct;	// IMP=0x00000000002755ac
@property(nonatomic) _Bool skipWriteMissingAssetStatusRecord; // @synthesize skipWriteMissingAssetStatusRecord=_skipWriteMissingAssetStatusRecord;
@property(retain, nonatomic) NSString *affectedRecordType; // @synthesize affectedRecordType=_affectedRecordType;
@property(nonatomic) _Bool isPackage; // @synthesize isPackage=_isPackage;
@property(retain, nonatomic) NSMutableArray *referenceSignatures; // @synthesize referenceSignatures=_referenceSignatures;
@property(retain, nonatomic) NSMutableArray *fileSignatures; // @synthesize fileSignatures=_fileSignatures;
@property(nonatomic) int listIndex; // @synthesize listIndex=_listIndex;
@property(retain, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
@property(retain, nonatomic) CKDPRecordIdentifier *brokenAssetRecordID; // @synthesize brokenAssetRecordID=_brokenAssetRecordID;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002751a2
- (unsigned long long)hash;	// IMP=0x0000000000275079
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000274e9a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000274aaf
- (void)copyTo:(id)arg1;	// IMP=0x000000000027489d
- (Class)responseClass;	// IMP=0x000000000027488c
- (unsigned int)requestTypeCode;	// IMP=0x0000000000274881
- (void)writeTo:(id)arg1;	// IMP=0x00000000002745a1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000274594
- (id)dictionaryRepresentation;	// IMP=0x0000000000273f2f
- (id)description;	// IMP=0x0000000000273e80
@property(nonatomic) _Bool hasSkipWriteMissingAssetStatusRecord;
@property(readonly, nonatomic) _Bool hasAffectedRecordType;
@property(nonatomic) _Bool hasIsPackage;
- (id)referenceSignatureAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000273da9
- (unsigned long long)referenceSignaturesCount;	// IMP=0x0000000000273d8c
- (void)addReferenceSignature:(id)arg1;	// IMP=0x0000000000273d22
- (void)clearReferenceSignatures;	// IMP=0x0000000000273d05
- (id)fileSignatureAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000273cd7
- (unsigned long long)fileSignaturesCount;	// IMP=0x0000000000273cba
- (void)addFileSignature:(id)arg1;	// IMP=0x0000000000273c50
- (void)clearFileSignatures;	// IMP=0x0000000000273c33
@property(nonatomic) _Bool hasListIndex;
@property(readonly, nonatomic) _Bool hasFieldName;
@property(readonly, nonatomic) _Bool hasBrokenAssetRecordID;

@end

