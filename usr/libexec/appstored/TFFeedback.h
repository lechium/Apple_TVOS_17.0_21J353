//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface TFFeedback : PBCodable
{
    NSString *_comment;	// 8 = 0x8
    NSString *_email;	// 16 = 0x10
    NSString *_incidentId;	// 24 = 0x18
    NSMutableArray *_screenshots;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000008d636
- (unsigned long long)hash;	// IMP=0x001000000008d5b1
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000008d4a5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000008d287
- (void)writeTo:(id)arg1;	// IMP=0x001000000008d0a9
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000008d09c
- (id)dictionaryRepresentation;	// IMP=0x001000000008cbd3
- (id)description;	// IMP=0x001000000008cb24

@end

