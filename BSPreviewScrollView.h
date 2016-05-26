//
//  BSPreviewScrollView.h
//
//  Created by Björn Sållarp on 7/14/10.
//  NO Copyright 2010 MightyLittle Industries. NO rights reserved.
// 
//  Use this code any way you like. If you do like it, please
//  link to my blog and/or write a friendly comment. Thank you!
//
//  Read my blog @ http://blog.sallarp.com
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>


@class BSPreviewScrollView;

@protocol BSPreviewScrollViewDelegate
@optional
-(void)viewAdded:(BSPreviewScrollView *)scrollView view:(UIView *)view index:(NSInteger)index;
@required
-(UIView*)viewForItemAtIndex:(BSPreviewScrollView*)scrollView index:(NSInteger)index;
-(NSInteger)itemCount:(BSPreviewScrollView*)scrollView;
-(void)scrollViewContentOffsetChanging:(float)newContentOffset views:(NSArray *)views;
@end


@interface BSPreviewScrollView : UIView<UIScrollViewDelegate> {
	NSMutableArray *scrollViewPages;
	BOOL firstLayout;
}
@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, weak) id<BSPreviewScrollViewDelegate, NSObject> delegate;
@property (nonatomic) CGSize pageSize;
@property (nonatomic) NSInteger visibleIndex;

- (void)didReceiveMemoryWarning;
- (id)initWithFrameAndPageSize:(CGRect)frame pageSize:(CGSize)size;

@end
