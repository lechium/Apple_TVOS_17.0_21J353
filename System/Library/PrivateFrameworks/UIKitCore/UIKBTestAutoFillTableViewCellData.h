//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface UIKBTestAutoFillTableViewCellData : NSObject
{
    UITableViewCell *_cell;	// 8 = 0x8
    double _height;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000009429aa
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) UITableViewCell *cell; // @synthesize cell=_cell;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000942923
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000942887
- (id)initWithCell:(id)arg1 height:(double)arg2;	// IMP=0x00000000009427f9

@end

