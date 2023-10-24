//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCAudioStreamCodecConfig : NSObject
{
    long long _codecType;	// 8 = 0x8
    _Bool _dtxEnabled;	// 16 = 0x10
    int _preferredMode;	// 20 = 0x14
    NSMutableArray *_supportedModes;	// 24 = 0x18
    NSMutableArray *_supportedBandwidths;	// 32 = 0x20
    _Bool _octetAligned;	// 40 = 0x28
    _Bool _dtmf;	// 41 = 0x29
    unsigned int _networkPayload;	// 44 = 0x2c
    unsigned short _evsChannelAwareOffset;	// 48 = 0x30
    _Bool _evsHeaderFullOnly;	// 50 = 0x32
    unsigned long long _pTime;	// 56 = 0x38
    _Bool _isOpusInBandFecEnabled;	// 64 = 0x40
}

@property(nonatomic) _Bool isOpusInBandFecEnabled; // @synthesize isOpusInBandFecEnabled=_isOpusInBandFecEnabled;
@property(nonatomic) unsigned long long pTime; // @synthesize pTime=_pTime;
@property(nonatomic) _Bool evsHeaderFullOnly; // @synthesize evsHeaderFullOnly=_evsHeaderFullOnly;
@property(nonatomic) unsigned short evsChannelAwareOffset; // @synthesize evsChannelAwareOffset=_evsChannelAwareOffset;
@property(nonatomic) unsigned int networkPayload; // @synthesize networkPayload=_networkPayload;
@property(nonatomic, getter=isDTMF) _Bool dtmf; // @synthesize dtmf=_dtmf;
@property(nonatomic, getter=isOctetAligned) _Bool octetAligned; // @synthesize octetAligned=_octetAligned;
@property(retain, nonatomic) NSArray *supportedBandwidths; // @synthesize supportedBandwidths=_supportedBandwidths;
@property(retain, nonatomic) NSArray *supportedModes; // @synthesize supportedModes=_supportedModes;
@property(nonatomic) int preferredMode; // @synthesize preferredMode=_preferredMode;
@property(nonatomic, getter=isDTXEnabled) _Bool dtxEnabled; // @synthesize dtxEnabled=_dtxEnabled;
@property(readonly, nonatomic) long long codecType; // @synthesize codecType=_codecType;
- (void)setupEVSModesWithClientModeMask:(unsigned int)arg1;	// IMP=0x00000000000502ea
- (void)setupAMRWBModesWithClientModeMask:(unsigned int)arg1;	// IMP=0x00000000000500d7
- (void)setupAMRModesWithClientModeMask:(unsigned int)arg1;	// IMP=0x000000000004fefa
- (void)setPreferredModeWithClientMode:(int)arg1;	// IMP=0x000000000004fef1
- (void)setupCodecBandwidthsWithClientBandwidthMask:(unsigned int)arg1;	// IMP=0x000000000004fd8a
- (void)setupModesWithClientModeMask:(unsigned int)arg1;	// IMP=0x000000000004fd3b
@property(readonly, nonatomic) _Bool isComfortNoise;
- (void)dealloc;	// IMP=0x000000000004fc94
- (id)initWithCodecType:(long long)arg1;	// IMP=0x000000000004fbfb

@end

