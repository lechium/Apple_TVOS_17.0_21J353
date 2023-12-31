//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNHandleStringClassifier;

__attribute__((visibility("hidden")))
@interface CNSharedProfileContactHandleHelper : NSObject
{
    CNHandleStringClassifier *_classifier;	// 8 = 0x8
}

+ (id)log;	// IMP=0x00600000000dbd6a
- (void).cxx_destruct;	// IMP=0x00000000000dc46f
@property(retain, nonatomic) CNHandleStringClassifier *classifier; // @synthesize classifier=_classifier;
- (_Bool)contact:(id)arg1 containsPhoneHandleString:(id)arg2;	// IMP=0x00000000000dc254
- (_Bool)contact:(id)arg1 containsEmailHandleString:(id)arg2;	// IMP=0x00000000000dc04e
- (_Bool)contact:(id)arg1 containsHandleString:(id)arg2;	// IMP=0x00000000000dbee0
- (id)initWithHandleStringClassifier:(id)arg1;	// IMP=0x00000000000dbe62
- (id)init;	// IMP=0x00000000000dbdc6

@end

