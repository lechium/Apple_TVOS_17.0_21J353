//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsMediaRecorder : NSObject
{
    _Bool _isHEIFAndHEVCFormatEnabled;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00600000002e4bdb
- (id)mediaRecorderVideoCodecs;	// IMP=0x00000000002e4def
- (id)mediaRecorderImageTypes;	// IMP=0x00000000002e4de7
- (unsigned char)mediaRecorderCapabilities;	// IMP=0x00000000002e4ddf
- (id)init;	// IMP=0x00000000002e4be3

@end
