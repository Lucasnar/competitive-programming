class PageFit
  def initialize(page, pic1, pic2)
    @page = page.sort
    @pic1 = pic1
    @pic2 = pic2
  end

  def pics_fit?
    combined_pics.any? { |combined_pic| combined_pic_fit?(combined_pic) }
  end

  private

  def combined_pics
    @combined_pics ||= [
      [@pic1[0] + @pic2[0], [@pic1[1], @pic2[1]].max].sort,
      [@pic1[0] + @pic2[1], [@pic1[1], @pic2[0]].max].sort,
      [@pic1[1] + @pic2[0], [@pic1[0], @pic2[1]].max].sort,
      [@pic1[1] + @pic2[1], [@pic1[0], @pic2[0]].max].sort,
    ]
  end

  def combined_pic_fit?(combined_pic)
    combined_pic[0] <= @page[0] && combined_pic[1] <= @page[1]
  end
end

puts PageFit.new(*(3.times.map { gets.split.map(&:to_i) })).pics_fit? ? "S" : "N"
