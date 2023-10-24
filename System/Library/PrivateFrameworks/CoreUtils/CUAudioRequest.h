//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioPlayer, NSString;

__attribute__((visibility("hidden")))
@interface CUAudioRequest : NSObject
{
    AVAudioPlayer *_audioPlayer;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
    NSString *_label;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000026d81
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;

@end

