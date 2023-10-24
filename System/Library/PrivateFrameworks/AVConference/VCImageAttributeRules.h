//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCImageAttributeRules : NSObject
{
    NSMutableDictionary *_imageAttributeRules;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableDictionary *imageAttributeRules; // @synthesize imageAttributeRules=_imageAttributeRules;
- (void)interfaceKey:(id *)arg1 forInterface:(int)arg2 directionKey:(id *)arg3 forDirection:(int)arg4;	// IMP=0x0000000000340796
- (void)swapSendAndReceiveRules;	// IMP=0x00000000003405e6
- (id)extractDimensionsForInterface:(int)arg1 direction:(int)arg2;	// IMP=0x0000000000340318
- (void)addRuleForVideoPayload:(int)arg1 withDirection:(int)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 priority:(int)arg6 interface:(int)arg7;	// IMP=0x0000000000340114
- (id)description;	// IMP=0x00000000003400e9
- (void)dealloc;	// IMP=0x000000000034008b
- (id)init;	// IMP=0x000000000033ff2f

@end

