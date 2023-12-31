//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ICLLMediaInfo : PBCodable
{
    NSString *_mediaType;	// 8 = 0x8
    NSString *_playParams;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000013e965
- (unsigned long long)hash;	// IMP=0x000000000013e918
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013e860
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013e7c2
- (void)writeTo:(id)arg1;	// IMP=0x000000000013e765
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000013e758
- (id)dictionaryRepresentation;	// IMP=0x000000000013e6d5
- (id)description;	// IMP=0x000000000013e626

@end

