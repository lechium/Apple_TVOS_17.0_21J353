//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class _ICLLPlaybackControlSettings;

__attribute__((visibility("hidden")))
@interface _ICLLPlaybackControlSettingsQuery : PBCodable
{
    _ICLLPlaybackControlSettings *_settings;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000008dfb6
- (unsigned long long)hash;	// IMP=0x000000000008df99
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008df09
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008de91
- (void)writeTo:(id)arg1;	// IMP=0x000000000008de6d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008de60
- (id)dictionaryRepresentation;	// IMP=0x000000000008ddd6
- (id)description;	// IMP=0x000000000008dd27

@end

