//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SHCustomCatalogMemoryStorage : NSObject
{
    NSArray *_referenceSignatures;	// 8 = 0x8
    NSMutableDictionary *_signatures;	// 16 = 0x10
    NSMutableDictionary *_mediaItems;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002bf0a
@property(retain, nonatomic) NSMutableDictionary *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(retain, nonatomic) NSMutableDictionary *signatures; // @synthesize signatures=_signatures;
- (void)producedSignature:(id)arg1 forID:(id)arg2;	// IMP=0x000000000002bd5e
- (void)producedMediaItem:(id)arg1 forID:(id)arg2;	// IMP=0x000000000002bbe8
- (id)referenceSignatureForTrackID:(unsigned long long)arg1;	// IMP=0x000000000002ba88
- (void)addSignature:(id)arg1 representingMediaItems:(id)arg2;	// IMP=0x000000000002b833
- (id)jsonObjectRepresentationWithError:(id *)arg1;	// IMP=0x000000000002b4b7
- (id)mediaItemsForReferenceSignature:(id)arg1;	// IMP=0x000000000002b3fd
@property(readonly, nonatomic) NSArray *referenceSignatures; // @synthesize referenceSignatures=_referenceSignatures;
- (id)init;	// IMP=0x000000000002af8e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
