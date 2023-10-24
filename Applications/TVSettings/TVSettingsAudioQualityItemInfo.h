//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVSettingsAudioQualityItemInfo : NSObject
{
    long long _audioQuality;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_subtitle;	// 24 = 0x18
    NSString *_moreInfo;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000037b3d
@property(readonly) NSString *moreInfo; // @synthesize moreInfo=_moreInfo;
@property(readonly) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly) long long audioQuality; // @synthesize audioQuality=_audioQuality;
- (id)initWithAudioQuality:(long long)arg1 title:(id)arg2 subtitle:(id)arg3 moreInfo:(id)arg4;	// IMP=0x0010000000037a33

@end

