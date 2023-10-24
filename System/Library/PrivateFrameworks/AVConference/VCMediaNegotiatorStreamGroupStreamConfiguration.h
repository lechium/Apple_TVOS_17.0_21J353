//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorStreamGroupStreamConfiguration : NSObject
{
    unsigned char _streamIndex;	// 8 = 0x8
    unsigned int _ssrc;	// 12 = 0xc
    unsigned short _streamID;	// 16 = 0x10
    NSMutableSet *_payloads;	// 24 = 0x18
    unsigned int _metadata;	// 32 = 0x20
    unsigned int _qualityIndex;	// 36 = 0x24
    unsigned int _maxNetworkBitrate;	// 40 = 0x28
    unsigned int _maxMediaBitrate;	// 44 = 0x2c
    unsigned int _maxPacketsPerSecond;	// 48 = 0x30
    unsigned short _repairedStreamID;	// 52 = 0x34
    unsigned int _repairedMaxNetworkBitrate;	// 56 = 0x38
    struct CGSize _resolution;	// 64 = 0x40
    unsigned int _framerate;	// 80 = 0x50
    unsigned int _keyFrameInterval;	// 84 = 0x54
    unsigned int _rtpTimestampRate;	// 88 = 0x58
    unsigned short _parentStreamID;	// 92 = 0x5c
    NSMutableArray *_codecs;	// 96 = 0x60
    _Bool _isTemporalStream;	// 104 = 0x68
    _Bool _isSubStream;	// 105 = 0x69
    unsigned int _audioChannelCount;	// 108 = 0x6c
    unsigned long long _serializedSize;	// 112 = 0x70
    unsigned int _coordinateSystem;	// 120 = 0x78
}

+ (id)configWithQualityIndex:(unsigned int)arg1 nwBitrate:(unsigned int)arg2 mediaBitrate:(unsigned int)arg3 maxPacketsPerSecond:(unsigned int)arg4 repairedNwBitrate:(unsigned int)arg5 keyFrameInterval:(unsigned int)arg6 framerate:(unsigned int)arg7 rtpSampleRate:(unsigned int)arg8 isTemporal:(_Bool)arg9 isSubStream:(_Bool)arg10 metadata:(unsigned int)arg11 payloads:(id)arg12 codecs:(id)arg13 width:(unsigned int)arg14 height:(unsigned int)arg15 audioChannelCount:(unsigned int)arg16 streamIndex:(unsigned char)arg17 coordinateSystem:(unsigned int)arg18;	// IMP=0x00100000000f93be
@property(nonatomic) unsigned char streamIndex; // @synthesize streamIndex=_streamIndex;
@property(nonatomic) unsigned int coordinateSystem; // @synthesize coordinateSystem=_coordinateSystem;
@property(nonatomic) unsigned long long serializedSize; // @synthesize serializedSize=_serializedSize;
@property(nonatomic) unsigned int audioChannelCount; // @synthesize audioChannelCount=_audioChannelCount;
@property(nonatomic) _Bool isSubStream; // @synthesize isSubStream=_isSubStream;
@property(nonatomic) _Bool isTemporalStream; // @synthesize isTemporalStream=_isTemporalStream;
@property(nonatomic) unsigned short parentStreamID; // @synthesize parentStreamID=_parentStreamID;
@property(readonly, nonatomic) NSArray *codecs; // @synthesize codecs=_codecs;
@property(nonatomic) unsigned int rtpTimestampRate; // @synthesize rtpTimestampRate=_rtpTimestampRate;
@property(nonatomic) unsigned int keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property(nonatomic) unsigned int framerate; // @synthesize framerate=_framerate;
@property(nonatomic) struct CGSize resolution; // @synthesize resolution=_resolution;
@property(nonatomic) unsigned int repairedMaxNetworkBitrate; // @synthesize repairedMaxNetworkBitrate=_repairedMaxNetworkBitrate;
@property(nonatomic) unsigned short repairedStreamID; // @synthesize repairedStreamID=_repairedStreamID;
@property(nonatomic) unsigned int maxPacketsPerSecond; // @synthesize maxPacketsPerSecond=_maxPacketsPerSecond;
@property(nonatomic) unsigned int maxMediaBitrate; // @synthesize maxMediaBitrate=_maxMediaBitrate;
@property(nonatomic) unsigned int maxNetworkBitrate; // @synthesize maxNetworkBitrate=_maxNetworkBitrate;
@property(nonatomic) unsigned int qualityIndex; // @synthesize qualityIndex=_qualityIndex;
@property(nonatomic) unsigned int metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSSet *payloads; // @synthesize payloads=_payloads;
@property(nonatomic) unsigned short streamID; // @synthesize streamID=_streamID;
@property(nonatomic) unsigned int ssrc; // @synthesize ssrc=_ssrc;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f970a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f9169
- (_Bool)isEqualPayloads:(id)arg1;	// IMP=0x00000000000f9028
- (_Bool)applyCipherSuiteOnMediaStreamConfig:(id)arg1 codecConfigs:(id)arg2;	// IMP=0x00000000000f8dd7
- (_Bool)areCodecsEqualTo:(id)arg1;	// IMP=0x00000000000f8d7a
- (void)resetCodecs;	// IMP=0x00000000000f8d64
- (void)removeCodec:(unsigned int)arg1;	// IMP=0x00000000000f8d2b
- (void)addCodec:(unsigned int)arg1;	// IMP=0x00000000000f8cf2
- (void)resetPayloads;	// IMP=0x00000000000f8cdc
- (void)addPayload:(int)arg1;	// IMP=0x00000000000f8ca3
- (void)dealloc;	// IMP=0x00000000000f8c36
- (id)init;	// IMP=0x00000000000f8bb0

@end

