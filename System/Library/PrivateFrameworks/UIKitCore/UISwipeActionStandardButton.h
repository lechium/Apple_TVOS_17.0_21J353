//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UISwipeActionStandardButton
{
    double _buttonWidth;	// 152 = 0x98
    struct {
        unsigned int isInLayoutSubviews:1;
    } _flags;	// 160 = 0xa0
    double _extensionLength;	// 168 = 0xa8
}

@property(nonatomic) double extensionLength; // @synthesize extensionLength=_extensionLength;
- (id)titleLabel;	// IMP=0x0000000000ff17f7
- (double)buttonWidth;	// IMP=0x0000000000ff1327
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000ff12e7
- (void)layoutSubviews;	// IMP=0x0000000000ff06e6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000ff056f

@end
