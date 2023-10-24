//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface HMDFileManager : HMFObject
{
}

- (void)enumerateItemsAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000077629f
- (_Bool)isDeletableFileAtPath:(id)arg1;	// IMP=0x000000000077622d
- (id)fileHandleForReadingFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000776214
- (_Bool)linkItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000077617f
- (_Bool)writeJSONObject:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000776087
- (id)JSONObjectWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000775fb3
- (_Bool)zipItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000775de2
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000775d63
- (_Bool)writeDictionary:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000775d48
- (_Bool)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000775d2a
- (id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000775d11
- (_Bool)fileExistsAtURL:(id)arg1;	// IMP=0x0000000000775c78
- (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000775be3
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 attributes:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000775b4a
@property(readonly, copy) NSURL *legacyHeroFrameStoreDirectoryURL;
@property(readonly, copy) NSURL *heroFrameStoreDirectoryURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
