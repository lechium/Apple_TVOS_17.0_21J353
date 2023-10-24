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

- (void)enumerateItemsAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000877286
- (_Bool)isDeletableFileAtPath:(id)arg1;	// IMP=0x0000000000877214
- (id)fileHandleForReadingFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000008771fb
- (_Bool)linkItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000877166
- (_Bool)writeJSONObject:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000087706e
- (id)JSONObjectWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000876f9a
- (_Bool)zipItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000876dc9
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000876d4a
- (_Bool)writeDictionary:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000876d2f
- (_Bool)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000876d11
- (id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000876cf8
- (_Bool)fileExistsAtURL:(id)arg1;	// IMP=0x0000000000876c5f
- (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000876bca
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 attributes:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000876b31
@property(readonly, copy) NSURL *legacyHeroFrameStoreDirectoryURL;
@property(readonly, copy) NSURL *heroFrameStoreDirectoryURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

