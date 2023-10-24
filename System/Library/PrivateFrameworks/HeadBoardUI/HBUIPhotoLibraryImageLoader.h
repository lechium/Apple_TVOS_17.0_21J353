//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface HBUIPhotoLibraryImageLoader : NSObject
{
    NSOperationQueue *_imageLoaderQueue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0010000000025ffd
- (void).cxx_destruct;	// IMP=0x0000000000026d5c
@property(readonly, nonatomic) NSOperationQueue *imageLoaderQueue; // @synthesize imageLoaderQueue=_imageLoaderQueue;
- (struct CGRect)_faceAreaRectForAsset:(id)arg1;	// IMP=0x0000000000026c53
- (struct CGRect)_bestCropRectForAsset:(id)arg1;	// IMP=0x0000000000026a89
- (void)_createMemoryFullScreenImageForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026567
- (void)cancelLoad:(id)arg1;	// IMP=0x000000000002651b
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000026102
- (id)imageKeyForObject:(id)arg1;	// IMP=0x00000000000260b8
- (id)_init;	// IMP=0x0000000000026062

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

