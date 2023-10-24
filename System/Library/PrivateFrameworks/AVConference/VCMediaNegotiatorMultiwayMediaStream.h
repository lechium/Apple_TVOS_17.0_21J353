//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorMultiwayMediaStream : NSObject
{
    unsigned int _ssrc;	// 8 = 0x8
    unsigned int _maxNetworkBitrate;	// 12 = 0xc
    unsigned int _maxMediaBitrate;	// 16 = 0x10
    unsigned int _maxPacketsPerSecond;	// 20 = 0x14
    unsigned short _streamID;	// 24 = 0x18
    _Bool _isSubstream;	// 26 = 0x1a
    unsigned int _qualityIndex;	// 28 = 0x1c
    _Bool _hasRepairedStreamID;	// 32 = 0x20
    unsigned short _repairedStreamID;	// 34 = 0x22
    unsigned int _repairedMaxNetworkBitrate;	// 36 = 0x24
}

@property(nonatomic) unsigned int repairedMaxNetworkBitrate; // @synthesize repairedMaxNetworkBitrate=_repairedMaxNetworkBitrate;
@property(nonatomic) unsigned short repairedStreamID; // @synthesize repairedStreamID=_repairedStreamID;
@property(nonatomic) _Bool hasRepairedStreamID; // @synthesize hasRepairedStreamID=_hasRepairedStreamID;
@property(nonatomic) unsigned int qualityIndex; // @synthesize qualityIndex=_qualityIndex;
@property(nonatomic) _Bool isSubstream; // @synthesize isSubstream=_isSubstream;
@property(nonatomic) unsigned short streamID; // @synthesize streamID=_streamID;
@property(nonatomic) unsigned int maxPacketsPerSecond; // @synthesize maxPacketsPerSecond=_maxPacketsPerSecond;
@property(nonatomic) unsigned int maxMediaBitrate; // @synthesize maxMediaBitrate=_maxMediaBitrate;
@property(nonatomic) unsigned int maxNetworkBitrate; // @synthesize maxNetworkBitrate=_maxNetworkBitrate;
@property(nonatomic) unsigned int ssrc; // @synthesize ssrc=_ssrc;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000596d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000595e1

@end

