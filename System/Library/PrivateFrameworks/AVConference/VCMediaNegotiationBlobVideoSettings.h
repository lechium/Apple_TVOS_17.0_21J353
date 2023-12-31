//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobVideoSettings : PBCodable
{
    unsigned int _customVideoHeight;	// 8 = 0x8
    unsigned int _customVideoWidth;	// 12 = 0xc
    unsigned int _hdrModesSupported;	// 16 = 0x10
    unsigned int _pixelFormats;	// 20 = 0x14
    unsigned int _rtpSSRC;	// 24 = 0x18
    unsigned int _tilesPerFrame;	// 28 = 0x1c
    NSMutableArray *_videoPayloadCollections;	// 32 = 0x20
    _Bool _allowRTCPFB;	// 40 = 0x28
    _Bool _fecEnabled;	// 41 = 0x29
    _Bool _ltrpEnabled;	// 42 = 0x2a
    _Bool _rtxEnabled;	// 43 = 0x2b
    struct {
        unsigned int customVideoHeight:1;
        unsigned int customVideoWidth:1;
        unsigned int hdrModesSupported:1;
        unsigned int pixelFormats:1;
        unsigned int tilesPerFrame:1;
        unsigned int fecEnabled:1;
        unsigned int ltrpEnabled:1;
        unsigned int rtxEnabled:1;
    } _has;	// 44 = 0x2c
}

+ (Class)videoPayloadCollectionsType;	// IMP=0x0010000000187c7b
+ (unsigned int)hdrModesBitmapWithSupportedModes:(id)arg1;	// IMP=0x00100000003af01f
+ (unsigned int)storePixelFormatsInBitMap:(id)arg1;	// IMP=0x00100000003aeebb
@property(nonatomic) _Bool rtxEnabled; // @synthesize rtxEnabled=_rtxEnabled;
@property(nonatomic) _Bool fecEnabled; // @synthesize fecEnabled=_fecEnabled;
@property(nonatomic) unsigned int hdrModesSupported; // @synthesize hdrModesSupported=_hdrModesSupported;
@property(nonatomic) unsigned int pixelFormats; // @synthesize pixelFormats=_pixelFormats;
@property(retain, nonatomic) NSMutableArray *videoPayloadCollections; // @synthesize videoPayloadCollections=_videoPayloadCollections;
@property(nonatomic) _Bool allowRTCPFB; // @synthesize allowRTCPFB=_allowRTCPFB;
@property(nonatomic) unsigned int rtpSSRC; // @synthesize rtpSSRC=_rtpSSRC;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000018959a
- (unsigned long long)hash;	// IMP=0x000000000018944d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000189256
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000188f94
- (void)copyTo:(id)arg1;	// IMP=0x0000000000188dfb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000188bb9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000188bac
- (id)dictionaryRepresentation;	// IMP=0x0000000000187ff9
- (id)description;	// IMP=0x0000000000187f5f
@property(nonatomic) _Bool hasRtxEnabled;
@property(nonatomic) _Bool hasFecEnabled;
@property(nonatomic) _Bool hasHdrModesSupported;
@property(nonatomic) _Bool hasPixelFormats;
@property(nonatomic) _Bool hasLtrpEnabled;
@property(nonatomic) _Bool ltrpEnabled; // @synthesize ltrpEnabled=_ltrpEnabled;
@property(nonatomic) _Bool hasTilesPerFrame;
@property(nonatomic) unsigned int tilesPerFrame; // @synthesize tilesPerFrame=_tilesPerFrame;
@property(nonatomic) _Bool hasCustomVideoHeight;
@property(nonatomic) unsigned int customVideoHeight; // @synthesize customVideoHeight=_customVideoHeight;
@property(nonatomic) _Bool hasCustomVideoWidth;
@property(nonatomic) unsigned int customVideoWidth; // @synthesize customVideoWidth=_customVideoWidth;
- (id)videoPayloadCollectionsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000187c5e
- (unsigned long long)videoPayloadCollectionsCount;	// IMP=0x0000000000187c41
- (void)addVideoPayloadCollections:(id)arg1;	// IMP=0x0000000000187bf4
- (void)clearVideoPayloadCollections;	// IMP=0x0000000000187bd7
- (void)dealloc;	// IMP=0x0000000000187b74
- (void)printScreenWithLogFile:(void *)arg1;	// IMP=0x00000000003b423c
- (void)printVideoWithLogFile:(void *)arg1;	// IMP=0x00000000003b34ce
- (void)prepareFormatString:(id)arg1 format:(id)arg2 formatIndex:(unsigned int)arg3 preferredFormat:(unsigned int)arg4;	// IMP=0x00000000003b338c
- (id)parameterSetStringFromPayloadSettings:(id)arg1;	// IMP=0x00000000003b328c
- (id)newFeatureStrings;	// IMP=0x00000000003b30bd
- (id)newVideoRuleCollectionsForScreen:(_Bool)arg1 isCellular16x9Capable:(_Bool)arg2 isLocalConfig:(_Bool)arg3;	// IMP=0x00000000003b1371
- (void)checkAndInsertRuleWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 framerate:(int)arg3 payload:(int)arg4 priority:(double)arg5 negotiationBitfield:(unsigned int *)arg6 negotiationBit:(unsigned int)arg7 rules:(id)arg8 isCellular16x9Capable:(_Bool)arg9;	// IMP=0x00000000003b0ff3
- (_Bool)setVideoRuleCollections:(id)arg1 featureStrings:(id)arg2 isScreen:(_Bool)arg3 isCellular16x9Capable:(_Bool)arg4;	// IMP=0x00000000003af2db
- (id)getPayloadSettingsForPayload:(int)arg1;	// IMP=0x00000000003af16c
- (id)initWithScreenSSRC:(unsigned int)arg1 allowRTCPFB:(_Bool)arg2 videoRuleCollections:(id)arg3 featureStrings:(id)arg4 isCellular16x9Capable:(_Bool)arg5 customVideoWidth:(unsigned int)arg6 customVideoHeight:(unsigned int)arg7 tilesPerFrame:(unsigned int)arg8 ltrpEnabled:(_Bool)arg9 pixelFormats:(id)arg10 hdrModesSupported:(id)arg11 fecEnabled:(_Bool)arg12 rtxEnabled:(_Bool)arg13;	// IMP=0x00000000003aeb3e
- (id)initWithSSRC:(unsigned int)arg1 allowRTCPFB:(_Bool)arg2 videoRuleCollections:(id)arg3 featureStrings:(id)arg4 isCellular16x9Capable:(_Bool)arg5 tilesPerFrame:(unsigned int)arg6 ltrpEnabled:(_Bool)arg7;	// IMP=0x00000000003aea23

@end

