//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MADMattedFrame : NSObject
{
    struct __CVBuffer *_pixelBuffer;	// 8 = 0x8
    CDStruct_1b6d18a9 _presentationTimestamp;	// 16 = 0x10
}

@property(readonly, nonatomic) CDStruct_1b6d18a9 presentationTimestamp; // @synthesize presentationTimestamp=_presentationTimestamp;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (void)dealloc;	// IMP=0x00000000001e70f1
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 presentationTimestamp:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000001e7070

@end

