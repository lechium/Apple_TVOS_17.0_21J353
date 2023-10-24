//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSString;

__attribute__((visibility("hidden")))
@interface _MPArtworkCatalogPlaceholderDataSource : NSObject
{
    NSCache *_fallbackCache;	// 8 = 0x8
}

+ (id)sharedDataSource;	// IMP=0x00100000000c72a4
- (void).cxx_destruct;	// IMP=0x00000000000c6fb6
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x00000000000c6fb0
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;	// IMP=0x00000000000c6ee3
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c6cfe
- (id)existingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x00000000000c6c21
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;	// IMP=0x00000000000c6b71
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;	// IMP=0x00000000000c6b69

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

