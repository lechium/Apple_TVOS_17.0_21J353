//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIStatusBarBluetoothItemView
{
    _Bool _connected;	// 128 = 0x80
    _Bool _shouldAnimateConnection;	// 129 = 0x81
}

- (id)accessibilityHUDRepresentation;	// IMP=0x0000000000ed5970
- (double)alphaForConnected:(_Bool)arg1;	// IMP=0x0000000000ed5954
- (void)setVisible:(_Bool)arg1;	// IMP=0x0000000000ed58e9
- (id)contentsImage;	// IMP=0x0000000000ed58d0
- (void)performPendedActions;	// IMP=0x0000000000ed5735
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;	// IMP=0x0000000000ed56bc

@end

