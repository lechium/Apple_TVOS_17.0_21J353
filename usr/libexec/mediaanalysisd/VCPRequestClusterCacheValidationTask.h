//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface VCPRequestClusterCacheValidationTask : NSObject
{
    struct atomic<bool> _started;	// 8 = 0x8
    struct atomic<bool> _cancel;	// 9 = 0x9
    NSURL *_photoLibraryURL;	// 16 = 0x10
    CDUnknownBlockType _progressHandler;	// 24 = 0x18
    CDUnknownBlockType _reply;	// 32 = 0x20
    CDUnknownBlockType _cancelBlock;	// 40 = 0x28
}

+ (id)taskWithPhotoLibraryURL:(id)arg1 andProgressHandler:(CDUnknownBlockType)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x00200000000d6a12
- (void).cxx_destruct;	// IMP=0x00200000000d6ffc
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (_Bool)autoCancellable;	// IMP=0x00100000000d6fdb
- (int)run;	// IMP=0x00100000000d6cca
- (_Bool)isCanceled;	// IMP=0x00100000000d6cab
- (void)cancel;	// IMP=0x00100000000d6ca0
- (float)resourceRequirement;	// IMP=0x00100000000d6c92
- (void)dealloc;	// IMP=0x00100000000d6aca
- (id)initWithPhotoLibraryURL:(id)arg1 andProgressHandler:(CDUnknownBlockType)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d694f

@end

