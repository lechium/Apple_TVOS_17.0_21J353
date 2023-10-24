//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputUnknownHelper
{
}

+ (id)keyPathsForValuesAffectingCanPerformMultiplePasses;	// IMP=0x00800000000b003c
- (_Bool)canStartRespondingToEachPassDescriptionReturningReason:(id *)arg1;	// IMP=0x00000000000b0686
- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;	// IMP=0x00000000000b0535
- (_Bool)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;	// IMP=0x00000000000b0520
- (_Bool)_canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 exceptionReason:(id *)arg3;	// IMP=0x00000000000b018e
- (void)setSampleReferenceBaseURL:(id)arg1;	// IMP=0x00000000000b015d
- (void)setMediaDataLocation:(id)arg1;	// IMP=0x00000000000b012c
- (void)setPreferredMediaChunkSize:(long long)arg1;	// IMP=0x00000000000b00fb
- (void)setPreferredMediaChunkAlignment:(long long)arg1;	// IMP=0x00000000000b00ca
- (void)setPreferredMediaChunkDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000b009f
- (void)setSourcePixelBufferAttributes:(id)arg1;	// IMP=0x00000000000b006e
- (_Bool)canPerformMultiplePasses;	// IMP=0x00000000000b005c
- (void)setPerformsMultiPassEncodingIfSupported:(_Bool)arg1;	// IMP=0x00000000000b000d
- (void)setProvisionalAlternateGroupID:(short)arg1;	// IMP=0x00000000000affde
- (void)setAlternateGroupID:(short)arg1;	// IMP=0x00000000000affaf
- (void)setLayer:(long long)arg1;	// IMP=0x00000000000aff7e
- (void)setPreferredVolume:(float)arg1;	// IMP=0x00000000000aff49
- (void)setMarksOutputTrackAsEnabled:(_Bool)arg1;	// IMP=0x00000000000aff1a
- (void)setExtendedLanguageTag:(id)arg1;	// IMP=0x00000000000afe52
- (void)setLanguageCode:(id)arg1;	// IMP=0x00000000000afd8a
- (_Bool)_validateLanguageCode:(id)arg1;	// IMP=0x00000000000afd15
- (void)setNaturalSize:(struct CGSize)arg1;	// IMP=0x00000000000afcd3
- (void)setMaximizePowerEfficiency:(_Bool)arg1;	// IMP=0x00000000000afca4
- (void)setExpectsMediaDataInRealTime:(_Bool)arg1;	// IMP=0x00000000000afc75
- (void)setMediaTimeScale:(int)arg1;	// IMP=0x00000000000afbab
- (void)setMetadata:(id)arg1;	// IMP=0x00000000000afb7a
- (void)setTransform:(struct CGAffineTransform)arg1;	// IMP=0x00000000000afb4f
- (long long)status;	// IMP=0x00000000000afb47
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription *)arg3;	// IMP=0x00000000000af916
- (id)initWithConfigurationState:(id)arg1;	// IMP=0x00000000000af7cf

@end

