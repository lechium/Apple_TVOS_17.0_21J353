//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UISheetActiveDetent : NSObject
{
    NSString *__identifier;	// 8 = 0x8
    double __value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004760ca
@property(readonly, nonatomic) double _value; // @synthesize _value=__value;
@property(readonly, nonatomic) NSString *_identifier; // @synthesize _identifier=__identifier;
- (id)description;	// IMP=0x0000000000475fc3
- (id)initWithIdentifier:(id)arg1 value:(double)arg2;	// IMP=0x0000000000475f40

@end

