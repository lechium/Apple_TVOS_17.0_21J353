//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SKTextureAtlasPacker : NSObject
{
}

+ (struct CGImage *)copyProcessedImageSource:(id)arg1;	// IMP=0x00800000000b99ce
- (void)generateTextureAtlasImages:(id)arg1 outputDictionary:(id *)arg2 forcePOT:(_Bool)arg3;	// IMP=0x00000000000b9b7a
- (id)processPackedTextureAtlas:(const void *)arg1 suffix:(id)arg2 packer:(shared_ptr_7747cbe3)arg3 sortedTrimArray:(const void *)arg4 sortedTextureArray:(const void *)arg5;	// IMP=0x00000000000b89eb
- (id)generateMetaData;	// IMP=0x00000000000b893a
- (id)getTextureFileList:(id)arg1 modDate:(id *)arg2;	// IMP=0x00000000000b83ab
- (id)partitionTextureFilesByResolution:(id)arg1;	// IMP=0x00000000000b7f5c
- (_Bool)isFullyOpaque:(struct CGImage *)arg1;	// IMP=0x00000000000b7d4a
- (struct CGRect)calcNonAlphaArea:(struct CGImage *)arg1;	// IMP=0x00000000000b7866
- (struct CGImage *)copyRotateCGImage:(struct CGImage *)arg1 direction:(_Bool)arg2;	// IMP=0x00000000000b75e3

@end

