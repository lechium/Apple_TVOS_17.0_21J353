//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ModelKeyServerAPIFetchKeyResult, ModelKeyServerAPIResultError;

__attribute__((visibility("hidden")))
@interface ModelKeyServerAPIFetchKeyResponse : PBCodable
{
    ModelKeyServerAPIResultError *_error;	// 8 = 0x8
    int _result;	// 16 = 0x10
    ModelKeyServerAPIFetchKeyResult *_success;	// 24 = 0x18
    struct {
        unsigned int result:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000a0763
@property(retain, nonatomic) ModelKeyServerAPIResultError *error; // @synthesize error=_error;
@property(retain, nonatomic) ModelKeyServerAPIFetchKeyResult *success; // @synthesize success=_success;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000a0692
- (unsigned long long)hash;	// IMP=0x00000000000a0612
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a052f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a046c
- (void)copyTo:(id)arg1;	// IMP=0x00000000000a03e9
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a038c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a00ec
- (id)dictionaryRepresentation;	// IMP=0x000000000009ffa0
- (id)description;	// IMP=0x000000000009fef1
- (void)clearOneofValuesForResult;	// IMP=0x000000000009fe91
- (int)StringAsResult:(id)arg1;	// IMP=0x000000000009fdfa
- (id)resultAsString:(int)arg1;	// IMP=0x000000000009fdb2
@property(nonatomic) _Bool hasResult;
@property(nonatomic) int result; // @synthesize result=_result;
@property(readonly, nonatomic) _Bool hasError;
@property(readonly, nonatomic) _Bool hasSuccess;

@end

