//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _WKFileUploadItem : NSObject
{
    struct RetainPtr<NSURL> _fileURL;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000416703
- (void).cxx_destruct;	// IMP=0x00000000004166e3
@property(readonly, nonatomic) RetainPtr_3316a20d displayImage;
- (void)setFileURL:(id)arg1;	// IMP=0x000000000041669e
- (id)fileURL;	// IMP=0x0000000000416694
@property(readonly, nonatomic, getter=isVideo) _Bool video;
- (id)initWithFileURL:(id)arg1;	// IMP=0x000000000041662a

@end

