//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQueryNeuralRewriteMetadata : PBCodable
{
    NSString *_modelId;	// 8 = 0x8
    float _modelScore;	// 16 = 0x10
    struct {
        unsigned int has_modelScore:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000aef090
- (unsigned long long)hash;	// IMP=0x0000000000aeef5d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000aeee9e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000aeee02
- (void)writeTo:(id)arg1;	// IMP=0x0000000000aeed9a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000aeed8d
- (id)jsonRepresentation;	// IMP=0x0000000000aeed7e
- (id)dictionaryRepresentation;	// IMP=0x0000000000aeec84
- (id)description;	// IMP=0x0000000000aeebd5

@end
