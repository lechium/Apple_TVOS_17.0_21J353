//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVAsset.h"

@class AVAssetInspectorLoader, AVDispatchOnce, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface AVDataAsset : AVAsset
{
    NSDictionary *_initializationOptions;	// 16 = 0x10
    AVAssetInspectorLoader *_loader;	// 24 = 0x18
    AVDispatchOnce *_allocateTracksOnceOnly;	// 32 = 0x20
    NSArray *_tracks;	// 40 = 0x28
}

+ (id)_getFigAssetCreationOptionsFromDataAssetInitializationOptions:(id)arg1 figAssetCreationFlags:(unsigned long long *)arg2;	// IMP=0x006000000002ab44
+ (unsigned long long)_dataLengthLimit;	// IMP=0x006000000002ab39
- (_Bool)_requiresInProcessOperation;	// IMP=0x000000000002b13f
- (unsigned long long)referenceRestrictions;	// IMP=0x000000000002b0ca
- (id)tracks;	// IMP=0x000000000002b008
- (Class)_classForTrackInspectors;	// IMP=0x000000000002afeb
- (struct OpaqueFigFormatReader *)_copyFormatReader;	// IMP=0x000000000002afce
- (id)_assetInspector;	// IMP=0x000000000002afb1
- (id)_assetInspectorLoader;	// IMP=0x000000000002afa0
- (void)dealloc;	// IMP=0x000000000002af2c
- (id)initWithData:(id)arg1 contentType:(id)arg2;	// IMP=0x000000000002af17
- (id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3;	// IMP=0x000000000002ace8

@end
