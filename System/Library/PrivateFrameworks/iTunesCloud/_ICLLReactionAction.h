//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ICLLReactionAction : PBCodable
{
    NSString *_itemId;	// 8 = 0x8
    NSString *_reaction;	// 16 = 0x10
    NSString *_reactionId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008e55d
- (unsigned long long)hash;	// IMP=0x000000000008e4f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008e410
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008e34c
- (void)writeTo:(id)arg1;	// IMP=0x000000000008e2d2
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008e2c5
- (id)dictionaryRepresentation;	// IMP=0x000000000008e21b
- (id)description;	// IMP=0x000000000008e16c

@end
