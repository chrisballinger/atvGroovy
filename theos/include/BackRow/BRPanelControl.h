/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"


@interface BRPanelControl : BRControl {
@private
	BRControl *_background;	// 40 = 0x28
	int _mode;	// 44 = 0x2c
	float _nonAxisAlignment;	// 48 = 0x30
	float _verticalSpacing;	// 52 = 0x34
	float _verticalMargin;	// 56 = 0x38
	float _horizontalSpacing;	// 60 = 0x3c
	float _horizontalMargin;	// 64 = 0x40
}
@property(retain) id backgroundControl;	// G=0x31665421; S=0x31665585; converted property
@property(assign) float horizontalMargin;	// G=0x31665471; S=0x31665481; converted property
@property(assign) float horizontalSpacing;	// G=0x31665461; S=0x316654b5; converted property
@property(assign) float nonAxisAlignment;	// G=0x31665431; S=0x31665551; converted property
@property(assign) int panelMode;	// G=0x31665411; S=0x316655ed; converted property
@property(assign) float verticalMargin;	// G=0x31665451; S=0x316654e9; converted property
@property(assign) float verticalSpacing;	// G=0x31665441; S=0x3166551d; converted property
- (id)init;	// 0x31665615
- (CGRect)_marginedFrameForFrame:(CGRect)frame screenRes:(CGSize)res;	// 0x31665a75
- (void)_performFillRightToLeft:(id)left;	// 0x31665c9d
- (void)_performFillTopToBottom:(id)bottom;	// 0x31665b25
- (CGSize)_performFlowRightToLeft:(id)left inBounds:(CGSize)bounds setFrame:(BOOL)frame;	// 0x316658b1
- (CGSize)_performFlowTopToBottom:(id)bottom inBounds:(CGSize)bounds setFrame:(BOOL)frame;	// 0x31665e0d
// converted property getter: - (id)backgroundControl;	// 0x31665421
// converted property getter: - (float)horizontalMargin;	// 0x31665471
// converted property getter: - (float)horizontalSpacing;	// 0x31665461
- (void)layoutSubcontrols;	// 0x31665669
// converted property getter: - (float)nonAxisAlignment;	// 0x31665431
// converted property getter: - (int)panelMode;	// 0x31665411
// converted property setter: - (void)setBackgroundControl:(id)control;	// 0x31665585
// converted property setter: - (void)setHorizontalMargin:(float)margin;	// 0x31665481
// converted property setter: - (void)setHorizontalSpacing:(float)spacing;	// 0x316654b5
// converted property setter: - (void)setNonAxisAlignment:(float)alignment;	// 0x31665551
// converted property setter: - (void)setPanelMode:(int)mode;	// 0x316655ed
// converted property setter: - (void)setVerticalMargin:(float)margin;	// 0x316654e9
// converted property setter: - (void)setVerticalSpacing:(float)spacing;	// 0x3166551d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x31665761
// converted property getter: - (float)verticalMargin;	// 0x31665451
// converted property getter: - (float)verticalSpacing;	// 0x31665441
@end

